
int FUN_00622170(long param_1,int param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 != 0) {
    lVar3 = FUN_0041c400(param_1,(long)param_2,"../crypto/ct/ct_log.c",0xc5);
    if (lVar3 == 0) {
LAB_006222ea:
      iVar2 = -1;
      FUN_00622100(local_48);
      FUN_0051f420();
      FUN_0051f540("../crypto/ct/ct_log.c",0xdd,"ctlog_store_load_log");
      FUN_0051f8f0(0x32,0xc0100,0);
      goto LAB_00622256;
    }
    lVar5 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    lVar4 = FUN_004ccb80(lVar5,lVar3,"description");
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ct/ct_log.c",0x9a,"ctlog_new_from_conf");
      uVar6 = 0x6f;
LAB_006222a0:
      FUN_0051f8f0(0x32,uVar6,0);
      FUN_0041ad60(lVar3,"../crypto/ct/ct_log.c",0xca);
    }
    else {
      lVar5 = FUN_004ccb80(lVar5,lVar3,"key");
      if (lVar5 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ct/ct_log.c",0xa0,"ctlog_new_from_conf");
        uVar6 = 0x70;
        goto LAB_006222a0;
      }
      iVar2 = FUN_00622d20(&local_48,lVar5,lVar4,*puVar1,puVar1[1]);
      FUN_0041ad60(lVar3,"../crypto/ct/ct_log.c",0xca);
      if (iVar2 < 0) goto LAB_00622256;
      if (iVar2 != 0) {
        iVar2 = FUN_00435f80(*(undefined8 *)(*param_3 + 0x10),local_48);
        if (iVar2 != 0) goto LAB_00622250;
        goto LAB_006222ea;
      }
    }
    param_3[2] = param_3[2] + 1;
  }
LAB_00622250:
  iVar2 = 1;
LAB_00622256:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

