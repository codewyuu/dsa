import hmac
import hashlib
import struct
import time
import base64
import urllib.request
import urllib.error
import json

def generate_totp(secret: str) -> str:
    # Encode secret as bytes
    key = secret.encode('utf-8')
    
    # Time step: 30 seconds, T0 = 0
    t = int(time.time()) // 30
    
    # Pack time as 8-byte big-endian
    msg = struct.pack('>Q', t)
    
    # HMAC-SHA-512 (not the default SHA-1!)
    h = hmac.new(key, msg, hashlib.sha512).digest()
    
    # Dynamic truncation (same as RFC6238)
    offset = h[-1] & 0x0F
    code = struct.unpack('>I', h[offset:offset+4])[0] & 0x7FFFFFFF
    
    # 10-digit OTP
    return str(code % 10**10).zfill(10)

def main():
    email = "codewyuu@gmail.com"
    gist_url = "https://gist.github.com/codewyuu/9212bb1a51cf404297b8c021358a7bc4"
    secret = email + "HENNGECHALLENGE004"
    
    totp = generate_totp(secret)
    print(f"Generated TOTP: {totp}")
    
    # HTTP Basic Auth: base64(email:totp)
    credentials = base64.b64encode(f"{email}:{totp}".encode()).decode()
    
    payload = json.dumps({
        "github_url": gist_url,
        "contact_email": email,
        "solution_language": "python"
    }).encode()

    req = urllib.request.Request(
        "https://api.challenge.hennge.com/challenges/backend-recursion/004",
        data=payload,
        headers={
            "Content-Type": "application/json",
            "Authorization": f"Basic {credentials}"
        },
        method="POST"
    )

    try:
        with urllib.request.urlopen(req) as res:
            print(f"Status: {res.status}")
            print(f"Response: {res.read().decode()}")
    except urllib.error.HTTPError as e:
        print(f"HTTP Error: {e.code}")
        print(f"Response: {e.read().decode()}")

if __name__ == "__main__":
    main()
