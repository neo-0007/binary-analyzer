
undefined8 FUN_0046c7b0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_00485290(*param_1);
  if (param_2 != 0) {
    lVar3 = thunk_FUN_0041cdd0(param_2,"digest");
    if (lVar3 != 0) {
      iVar1 = FUN_0041c9c0(*(undefined8 *)(lVar3 + 0x10),&DAT_007d039a);
      if (iVar1 == 0) {
        iVar1 = FUN_0043caf0(param_1 + 1,param_2,&DAT_007d37c9,0,&DAT_007cfb56,uVar2);
        if (iVar1 != 0) {
          iVar1 = FUN_0043caf0(param_1 + 2,param_2,&DAT_007d37c9,0,&DAT_007d039e,uVar2);
          if (iVar1 == 0) {
            uVar2 = 0;
            goto LAB_0046c960;
          }
          goto LAB_0046c877;
        }
      }
      else {
        FUN_0053f190(param_1[2]);
        iVar1 = FUN_0043caf0(param_1 + 1,param_2,&DAT_007d37c9,0,0,uVar2);
        if (iVar1 != 0) goto LAB_0046c877;
      }
LAB_0046c83f:
      uVar2 = 0;
      goto LAB_0046c960;
    }
LAB_0046c877:
    lVar3 = thunk_FUN_0041cdd0(param_2,"secret");
    if (lVar3 != 0) {
      FUN_0041aef0(param_1[3],param_1[4],"../providers/implementations/kdfs/tls1_prf.c",0xc1);
      param_1[3] = 0;
      iVar1 = FUN_0041e150(lVar3,param_1 + 3,0,param_1 + 4);
      if (iVar1 == 0) goto LAB_0046c83f;
    }
    for (lVar3 = thunk_FUN_0041cdd0(param_2,"seed"); lVar3 != 0;
        lVar3 = thunk_FUN_0041cdd0(lVar3 + 0x28,"seed")) {
      lVar4 = param_1[0x85];
      local_38 = 0;
      local_40 = (long)param_1 + lVar4 + 0x28;
      if ((*(long *)(lVar3 + 0x18) != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
        uVar2 = FUN_0041e150(lVar3,&local_40,0x400 - lVar4,&local_38);
        if ((int)uVar2 == 0) goto LAB_0046c960;
        lVar4 = param_1[0x85] + local_38;
      }
      param_1[0x85] = lVar4;
    }
  }
  uVar2 = 1;
LAB_0046c960:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

