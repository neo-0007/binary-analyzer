
void FUN_0046b060(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_0043c5e0(param_1 + 1);
  FUN_0041aef0(param_1[4],param_1[5],"../providers/implementations/kdfs/sshkdf.c",0x52);
  FUN_0041aef0(param_1[6],param_1[7],"../providers/implementations/kdfs/sshkdf.c",0x53);
  FUN_0041aef0(param_1[9],param_1[10],"../providers/implementations/kdfs/sshkdf.c",0x54);
  *param_1 = uVar1;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 9) = (undefined1  [16])0x0;
  return;
}

