
long FUN_005965f0(long *param_1,long param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined2 local_3f;
  undefined4 local_3d;
  undefined2 local_39;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00596651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return lVar3;
    }
    goto LAB_005967d4;
  }
  local_37 = 0x65746e45;
  local_33 = 0x2072;
  local_31 = 0;
  local_3d = 0x726f6620;
  local_39 = 0x20;
  local_3f = 0x3a;
  if (param_2 == 0) {
LAB_005967cc:
    lVar3 = 0;
  }
  else {
    iVar1 = thunk_FUN_007129d0(param_2);
    if (param_3 == 0) {
      lVar4 = (long)(iVar1 + 8);
      lVar3 = FUN_0041ad90(lVar4,"../crypto/ui/ui_lib.c",0x178);
      if (lVar3 == 0) goto LAB_005967a0;
      FUN_0041c470(lVar3,&local_37,lVar4);
      FUN_0041c4d0(lVar3,param_2,lVar4);
    }
    else {
      iVar2 = thunk_FUN_007129d0(param_3);
      lVar4 = (long)(iVar1 + 0xd + iVar2);
      lVar3 = FUN_0041ad90(lVar4,"../crypto/ui/ui_lib.c",0x178);
      if (lVar3 == 0) {
LAB_005967a0:
        FUN_0051f420();
        FUN_0051f540("../crypto/ui/ui_lib.c",0x179,"UI_construct_prompt");
        FUN_0051f8f0(0x28,0xc0100,0);
        goto LAB_005967cc;
      }
      FUN_0041c470(lVar3,&local_37,lVar4);
      FUN_0041c4d0(lVar3,param_2,lVar4);
      FUN_0041c4d0(lVar3,&local_3d,lVar4);
      FUN_0041c4d0(lVar3,param_3,lVar4);
    }
    FUN_0041c4d0(lVar3,&local_3f,lVar4);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
LAB_005967d4:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

