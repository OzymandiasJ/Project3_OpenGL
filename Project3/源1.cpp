#删除原来远程仓库（origin表示远程仓库名称，如果不知道可以使用git remote - v 命令查看）
git remote rm origin

#添加远程仓库地址（记得选择git方式的远程仓库地址）
git remote add origin git@github.com:ClowLAY / spring - cloud - config.git

#最后再次提交项目
git push - u origin main