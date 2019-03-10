import requests
s = requests.Session()
text = s.get("https://www.clearain.cn").text
print text
