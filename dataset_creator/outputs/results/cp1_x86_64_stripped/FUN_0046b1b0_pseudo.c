
undefined8 FUN_0046b1b0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_00485290(*param_1);
  if (param_2 == 0) {
LAB_0046b378:
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0043c6f0(param_1 + 1,param_2,uVar2);
    if (iVar1 != 0) {
      lVar3 = thunk_FUN_0041cdd0(param_2,"key");
      if (lVar3 != 0) {
        FUN_0041aef0(param_1[4],param_1[5],"../providers/implementations/kdfs/sshkdf.c",0x5c);
        param_1[4] = 0;
        param_1[5] = 0;
        iVar1 = FUN_0041e150(lVar3,param_1 + 4,0,param_1 + 5);
        if (iVar1 == 0) goto LAB_0046b1f6;
      }
      lVar3 = thunk_FUN_0041cdd0(param_2,"xcghash");
      if (lVar3 != 0) {
        FUN_0041aef0(param_1[6],param_1[7],"../providers/implementations/kdfs/sshkdf.c",0x5c);
        param_1[6] = 0;
        param_1[7] = 0;
        iVar1 = FUN_0041e150(lVar3,param_1 + 6,0,param_1 + 7);
        if (iVar1 == 0) goto LAB_0046b1f6;
      }
      lVar3 = thunk_FUN_0041cdd0(param_2,"session_id");
      if (lVar3 != 0) {
        FUN_0041aef0(param_1[9],param_1[10],"../providers/implementations/kdfs/sshkdf.c",0x5c);
        param_1[9] = 0;
        param_1[10] = 0;
        iVar1 = FUN_0041e150(lVar3,param_1 + 9,0,param_1 + 10);
        if (iVar1 == 0) goto LAB_0046b1f6;
      }
      lVar3 = thunk_FUN_0041cdd0(param_2,"type");
      if (lVar3 == 0) goto LAB_0046b378;
      iVar1 = FUN_0041e4a0(lVar3,&local_28);
      if (((iVar1 != 0) && (local_28 != (char *)0x0)) && (*(long *)(lVar3 + 0x18) == 1)) {
        if ((byte)(*local_28 + 0xbfU) < 6) {
          *(char *)(param_1 + 8) = *local_28;
          goto LAB_0046b378;
        }
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/kdfs/sshkdf.c",0xaa,"kdf_sshkdf_set_ctx_params");
        FUN_0051f8f0(0x39,0x8a,0);
      }
    }
LAB_0046b1f6:
    uVar2 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

