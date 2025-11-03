# 알고리즘 공부

### git clone 하기
git clone {원격 레포지토리 주소}

# Git 명령어

### Add
`git add "file name"`
"file name"의 파일을 추적 및 Staged로 전환하는 명령어
`git add .`
작업 중인 모든 파일을 추가 및 Staged로 전환하는 명령어

### Commit
```
git commit -m "Commit Message"

git commit --amend

git commit --amend -m "Commit message"
```
-m 옵션은 커밋에 이름을 적어주는 옵션
--amend 옵션은 현재 커밋 내용을 제일 최근 커밋과 합치는 것.

### Log
```
git log

git log --oneline #주로 사용, 로그를 한 줄로 볼 수 있음.
```
과거 버전 확인

### Checkout
`git checkout "Branch Name"`
"Branch Name"의 브랜치로 이동하는 명령어
`git checkout -b "New Branch Name" # 이 방법으로 브랜치 개설을 추천`
새로운 브랜치 "New Branch Name"으로 개설하면서 이동하는 명령어

### Push
`git push origin`
커밋한 내용을 origin 원격 레포지토리로 업로드

### Pull
`git pull`
현재 작업 중인 브랜치에서 원격 브랜치의 버전이 더 높을 때, 변경사항을 원격에서 로컬로 가져오는 명령어

### 예시 작업 흐름 (브랜치 단위 문제 풀이)
```
git checkout -b feature/12-boj1000   # 문제용 브랜치 생성
... 코드 작성 ...
git add .
git commit -m "feat: BOJ-1000 해결"
git push origin feature/12-boj1000   # PR 생성 준비
```
