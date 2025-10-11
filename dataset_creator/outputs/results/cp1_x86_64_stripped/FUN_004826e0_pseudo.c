
undefined8 FUN_004826e0(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
LAB_00482888:
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 2) == 1) {
LAB_004827a9:
      lVar2 = thunk_FUN_0041cdd0(param_2,"expect");
      if (lVar2 != 0) {
        iVar1 = thunk_FUN_0041cf60(lVar2,param_1 + 8);
        if (iVar1 == 0) goto LAB_004828c0;
      }
      lVar2 = thunk_FUN_0041cdd0(param_2,"subject");
      if (lVar2 == 0) goto LAB_00482888;
      local_30 = 0;
      local_28 = 0;
      if (*(int *)(param_1 + 2) == 1) {
        iVar1 = FUN_0041e4f0(lVar2,&local_30,&local_28);
        if (iVar1 != 0) {
          lVar2 = FUN_005ad500(0,&local_30,local_28);
          if (lVar2 != 0) {
            uVar3 = FUN_00485290(*param_1);
            uVar3 = FUN_0059ec70(lVar2,uVar3,0,&local_34);
            FUN_004aeb30((long)param_1 + 0x24,9,"%08lx",uVar3);
            FUN_005ad580(lVar2);
            if (local_34 != 0) goto LAB_00482888;
          }
        }
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/storemgmt/file_store.c",0x167,
                     "file_set_ctx_params");
        FUN_0051f8f0(0x39,0xde,0);
      }
    }
    else {
      lVar2 = thunk_FUN_0041cdd0(param_2,"properties");
      if (lVar2 == 0) {
LAB_0048275f:
        lVar2 = thunk_FUN_0041cdd0(param_2,"input-type");
        if (lVar2 != 0) {
          FUN_0041ad60(param_1[5],"../providers/implementations/storemgmt/file_store.c",0x155);
          param_1[5] = 0;
          iVar1 = FUN_0041e0b0(lVar2,param_1 + 5,0);
          if (iVar1 == 0) goto LAB_004828c0;
        }
        goto LAB_004827a9;
      }
      FUN_0041ad60(param_1[6],"../providers/implementations/storemgmt/file_store.c",0x14e);
      param_1[6] = 0;
      iVar1 = FUN_0041e0b0(lVar2,param_1 + 6,0);
      if (iVar1 != 0) goto LAB_0048275f;
    }
LAB_004828c0:
    uVar3 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

