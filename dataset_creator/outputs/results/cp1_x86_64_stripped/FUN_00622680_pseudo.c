
undefined8 * FUN_00622680(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_4c [4];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_0041aec0(0x40,"../crypto/ct/ct_log.c",0x10e);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_log.c",0x111,"CTLOG_new_ex");
    FUN_0051f8f0(0x32,0xc0100,0);
    goto LAB_0062279e;
  }
  *puVar2 = param_3;
  if (param_4 == 0) {
LAB_006226fc:
    lVar4 = FUN_0041c2c0(param_2,"../crypto/ct/ct_log.c",0x11e);
    puVar2[2] = lVar4;
    if (lVar4 != 0) {
      local_48 = 0;
      iVar1 = FUN_005aeb80(param_1,&local_48);
      if (iVar1 < 1) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ct/ct_log.c",0x56,"ct_v1_log_id_from_pkey");
        FUN_0051f8f0(0x32,0x71,0);
LAB_006227f4:
        FUN_00406a50(0);
        FUN_0041ad60(local_48,"../crypto/ct/ct_log.c",99);
      }
      else {
        lVar4 = FUN_004069d0(*puVar2,"SHA2-256",puVar2[1]);
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ct/ct_log.c",0x5b,"ct_v1_log_id_from_pkey");
          FUN_0051f8f0(0x32,0x80006,0);
          goto LAB_006227f4;
        }
        iVar1 = FUN_00407440(local_48,(long)iVar1,puVar2 + 3,local_4c,lVar4,0);
        FUN_00406a50(lVar4);
        FUN_0041ad60(local_48,"../crypto/ct/ct_log.c",99);
        if (iVar1 == 1) {
          puVar2[7] = param_1;
          goto LAB_0062279e;
        }
      }
      FUN_00622100(puVar2);
      puVar2 = (undefined8 *)0x0;
      goto LAB_0062279e;
    }
    FUN_0051f420();
    uVar3 = 0x120;
  }
  else {
    uVar3 = FUN_0041c2c0(param_4,"../crypto/ct/ct_log.c",0x117);
    puVar2[2] = uVar3;
    if (puVar2[1] != 0) goto LAB_006226fc;
    FUN_0051f420();
    uVar3 = 0x119;
  }
  FUN_0051f540("../crypto/ct/ct_log.c",uVar3,"CTLOG_new_ex");
  FUN_0051f8f0(0x32,0xc0100,0);
  FUN_00622100(puVar2);
  puVar2 = (undefined8 *)0x0;
LAB_0062279e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

