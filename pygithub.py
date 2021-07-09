from github import Github
from git import Repo
import os
from dotenv import load_dotenv

# load env variables
load_dotenv()

def main():
    repo_dir = ""
    repo = Repo(repo_dir)
    file_list = [
        'Auto-Push/test-file.txt'
    ]
    commit_message = 'testing repo with adding test-file.txt'
    repo.index.add(file_list)
    repo.index.commit(commit_message)
    origin = repo.remote('origin')
    origin.push()


def alternative_push():
    import subprocess
    commit_message = "testing out commit using subprocess"
    subprocess.call(['git', 'add', '.'])
    subprocess.call(['git', 'commit', '-m', '{}'.format(commit_message)])
    token = os.environ['TOKEN']
    username = "apinanyogaratnam"
    repo_name = "automate_git"
    subprocess.call(['git', 'push', 'https://{}@github.com/{}/{}.git'.format(token, username, repo_name)])


if __name__ == '__main__':
    # main()
    alternative_push()
