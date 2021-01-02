# Post limit, maximum pastes per 24h = 10 POST req


from urllib.request import urlopen
import urllib.parse


# PASTEBIN_KEY = 'Mjk3Xt_qbisB_6MRJP0mY8Wes6mDuSh4'  # code3p
PASTEBIN_KEY = 'f9eebefd60f4614d3e2f57252d63d8ae'  # ehsan3p


# code to get a api_user_key
PASTEBIN_URL = 'https://pastebin.com/api/api_login.php'
pastebin_vars = dict(
    api_user_name='ehsan3p',
    api_dev_key=PASTEBIN_KEY,
    api_user_password='Enter your PASSWORD',
)

USER_KEY = urlopen(urllib.request.Request(PASTEBIN_URL, urllib.parse.urlencode(
    pastebin_vars).encode('utf8'))).read().decode("utf-8")


# your code goes between '''  '''
source_code = '''
# Post limit, maximum pastes per 24h = 10 POST req


from urllib.request import urlopen
import urllib.parse

# To know your API key, sign in to your paste bin account
# and go to https://pastebin.com/doc_api#1
PASTEBIN_KEY = 'Your Unique Developer API Key'


# If you don't want to paste from your paste bin account
# then comment out the code from line no. 16 - 25

# code to get a api_user_key
PASTEBIN_URL = 'https://pastebin.com/api/api_login.php'
pastebin_vars = dict(
    api_user_name='Your USER_NAME',
    api_dev_key=PASTEBIN_KEY,
    api_user_password='Your PASSWORD',
)

USER_KEY = urlopen(urllib.request.Request(PASTEBIN_URL, urllib.parse.urlencode(pastebin_vars).encode('utf8'))).read().decode("utf-8")



# your code goes between '''  ''' (there must be three single qoutes, not two)
source_code = ''

''

# post request to paste
PASTEBIN_URL = 'https://pastebin.com/api/api_post.php'
pastebin_vars = dict(
    api_user_key=USER_KEY,
    api_option='paste',
    api_dev_key=PASTEBIN_KEY,
    api_paste_name='pastebin_API_python',
    api_paste_code=source_code,
    api_paste_format='python',
)

print(urlopen(urllib.request.Request(PASTEBIN_URL, urllib.parse.urlencode(pastebin_vars).encode('utf8'))).read().decode("utf-8"))

'''

# post request to paste
PASTEBIN_URL = 'https://pastebin.com/api/api_post.php'
pastebin_vars = dict(
    api_user_key=USER_KEY,
    api_option='paste',
    api_dev_key=PASTEBIN_KEY,
    api_paste_name='pastebin_API_python',
    api_paste_code=source_code,
    api_paste_format='python',
)

# data = urllib.parse.urlencode(pastebin_vars)
# print('data', data)
# data = data.encode('utf8')
# print('encoded', data)
# req = urllib.request.Request(PASTEBIN_URL, data)
# print('req', req.get_full_url)
# resp = urlopen(req)
# print('resp', resp.read())

print(urlopen(urllib.request.Request(PASTEBIN_URL,
                                     urllib.parse.urlencode(pastebin_vars).encode('utf8'))).read().decode("utf-8"))
