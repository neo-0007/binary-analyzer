
long FUN_0055ac00(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_1;
  iVar1 = FUN_005594b0(&local_38,param_2,local_3c,&local_40,param_3,param_4);
  if (iVar1 < 1) {
    FUN_0051f420();
    lVar3 = 0;
    FUN_0051f540("../crypto/pem/pvkfmt.c",0x122,"do_b2i_key");
    FUN_0051f8f0(9,0x7a,0);
  }
  else {
    uVar2 = FUN_00559780(local_40,*param_3,*param_4);
    if ((int)param_2 - 0x10U < uVar2) {
      FUN_0051f420();
      lVar3 = 0;
      FUN_0051f540("../crypto/pem/pvkfmt.c",0x127,"do_b2i_key");
      FUN_0051f8f0(9,0x7b,0);
    }
    else {
      if (*param_3 == 0) {
        lVar3 = FUN_0055a560(&local_38,local_40,*param_4);
      }
      else {
        lVar3 = FUN_0055a2d0();
      }
      if (lVar3 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/pem/pvkfmt.c",0x132,"do_b2i_key");
        FUN_0051f8f0(9,0x6e,0);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

