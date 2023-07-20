编译之后，在`build/phoenix-test`目录下，又一个phoenix可执行文件：
```
./phoenix -t // test 模式，开启chaos

./phoenix -r // reproduce模式，停止chaos，开始尝试复现
```

需要安装chaosblade使用，见：https://chaosblade.io/docs/getting-started/chaosblade-tool-quick-start/

代码中需要使用的checking_data.sh，getHeight.sh 和 getHeight.py脚本已经放在phoenix-test目录下，是用来检查当前系统状态的，checking_data就是执行了一下压测看是不是正常, getHeight是访问log看当前的节点块高是否一致，可能需要稍微修改下使用。
