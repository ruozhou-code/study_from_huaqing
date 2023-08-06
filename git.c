//初始化git全局的常用操作
git config --global user.name "wrz"
git config --global user.email "2350808537@qq.com"
#提交时转换为LF，检出时转换为CRLF 目前测试了，没啥用
git config --global core.autocrlf true


git status -s //简略模式
返回如下:
?? <文件夹名称> //第一个问号表示暂存区的名称 第二个问号表示工作区的状态 -M表示被修改过

//查看暂存区里面的内容
git ls-files

git checkout

git diff命令默认比较的是工作区和暂存区的内容

git diff HEAD//其中HEAD指的是当前版本前一次版本的内容

git reset --

//比较暂存区和版本库之间的差异
git diff //比较工作区和暂存区
git diff HEAD //工作区+暂存区 VS 本地仓库
git diff --cached/git diff --staged //暂存区 VS 本地仓库
git diff <文件哈希表>/HEAD <文件哈希表>/HEAD //比较提交之间的差异

git diff <branch_name> <branch_name> //比较分支之间的差异

git diff HEAD~ HEAD
git diff HEAD^ HEAD
git diff HEAD~2 HEAD
git diff HEAD~3 HEAD
git diff HEAD~ HEAD <file>


//删除文件
rm file;git add file //先把工作区文件删除，然后再从暂存区删除内容
git rm <文件名>  //把文件从工作区和暂存区同时删除
git rm --cached <file> //把文件从暂存区删除，但保留在当前工作区中国
git rm -r * //递归删除某个我目录下的所有子目录和文件
            //eg:删除后别忘了提交

//忽略文件 比如日志文件和文件夹、.class、.o、.env、.zip和tar等等文件
把文件放入.gitignore文件中 //gitignore对已经添加到仓库的文件不起作用
git rm --cached <file name> //把文件从版本中删除
空文件夹不会被纳入到版本控制中

空行或者以#开头的会被忽略，一般用作注释
    * ?匹配
    []匹配列表中单个字符
    **匹配任意中间目录
    []可以使用短中线连接,[0-9]表示任意一位数字,[a-z]表示任意一位小写字母
    !表示取反
    github上有模板,按需修改

//远程仓库命令
id_rsa      //私钥文件
id_rsa.pub  //公钥文件
git pull    //从远程下载
git push    //从远程上传


//分支与合并
git branch  //查看分支

git branch <分支名>  //创建一个分支

git checkout master //切换到master分支

git branch -d <分支名字>  //删除分区

-b?

//合并要先去目标分区
git merge <分支名字>  //合并分区，合并到当前分区

//如果主分支和分支都修改了同名文件，会产生冲突，需要袭击用手去解决

如果git merge合并的时候出现refusing to merge unrelated histories的错误，原因是两个仓库不同而导致的，需要在后面加上--allow-unrelated-histories进行允许合并，即可解决问题
如果远程仓库有一个master分支，本地仓库也有另一个master分支，那么可以将本地仓库与远程仓库链接，然后将项目推送到远程仓库。具体步骤如下：

在项目根目录下输入git remote add origin 远程仓库地址,连接成功。
输入git checkout -b local_master,创建一个新的分支local_master。
将新的分支local_master与远程仓库的master分支进行合并，即执行git merge origin/master。
将本地仓库与远程仓库链接，即执行git push -u origin local_master。

//有关ssh的操作
https://blog.csdn.net/qq_48772601/article/details/122363395
简单的说：

//创建第一个公钥，注意要修改邮箱，最后一个是指定密钥的名字，一般要自己创建文件夹存密钥
ssh-keygen -t rsa -C '邮箱1' -f ~/.ssh/gitee_id_rsa

//修改config文件如下

#vscode
Host 192.168.50.210
  HostName 192.168.50.210
  User farsight

#github
Host github.com
	HostName github.com
	PreferredAuthentications publickey
	IdentityFile ~/.ssh/git_ssh/github_ssh
	user 2350808537@qq.com

# gitee
Host gitee.com
	HostName gitee.com
	PreferredAuthentications publickey
	IdentityFile ~/.ssh/gitee/gitee_id_rsa
	user 2350808537@qq.com


//测试添加是否成功
ssh -T git@gitee.com




