# 1. 检查状态（确认只有 .cpp 文件被修改，没有误加编译产物）
git status

# 2. 添加所有变更到暂存区（会自动跳过 .gitignore 中的 build/ 等文件）
git add .

# 3. 提交到本地仓库
git commit -m "C++ learning"

# 4. 推送到 GitHub（已保存 Token，无需输入密码）
git push
