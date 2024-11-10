import openai

# 设置OpenAI key
openai.api_key = "<API-KEY>"

# 设置openai 代理地址, 需要添加 /v1
openai.api_base = "http://web.lansejingyu.com/v1"

def chat(prompt: str) -> dict:
    """
    生成，根据提示，来生成补全
    :param prompt: 提示
    :return: 返回response map
    """
    response = openai.ChatCompletion.create(
        model="gpt-3.5-turbo",
        messages=[
            {"role": "user", "content": prompt}
        ]
    )

    return response

if __name__ == '__main__':
    print(chat("Hi who are you?"))
