
long FUN_004d3810(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  undefined1 local_40 [8];
  undefined8 local_38;
  int *local_30;
  undefined8 *local_28;
  long local_20;
  
  lVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004a2cd0(0,local_40,&local_48,&local_28,param_1);
  if (iVar1 == 0) goto LAB_004d38b3;
  FUN_004a8930(0,&local_44,&local_30,local_28);
  if ((local_44 == 0x10) && (lVar3 = FUN_004a76a0(0,local_40,(long)local_48), lVar3 != 0)) {
    local_38 = *(undefined8 *)(local_30 + 2);
    iVar1 = *local_30;
    iVar2 = FUN_00423da0(*local_28);
    if (iVar2 == 0x1c) {
      lVar4 = FUN_004d3120(0,&local_38,(long)iVar1);
    }
    else {
      if (iVar2 != 0x398) goto LAB_004d386d;
      lVar4 = FUN_004d31a0(0,&local_38,(long)iVar1);
    }
    if (lVar4 == 0) goto LAB_004d386d;
    lVar5 = FUN_004b7700();
    if ((lVar5 == 0) || (lVar6 = FUN_0049fa70(lVar3,lVar5), lVar6 == 0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_backend.c",0xe5,"ossl_dh_key_from_pkcs8");
      FUN_0051f8f0(5,0x6a,0);
      FUN_004b7f20(lVar5);
      goto LAB_004d38a0;
    }
    iVar1 = FUN_004d6060(lVar4,0,lVar5);
    if ((iVar1 == 0) || (iVar1 = FUN_004d5370(lVar4), iVar1 == 0)) goto LAB_004d38a0;
  }
  else {
    lVar3 = 0;
LAB_004d386d:
    FUN_0051f420();
    lVar4 = 0;
    FUN_0051f540("../crypto/dh/dh_backend.c",0xf2,"ossl_dh_key_from_pkcs8");
    FUN_0051f8f0(5,0x72,0);
LAB_004d38a0:
    FUN_004d5b70(lVar4);
    lVar4 = 0;
  }
  FUN_004a2300(lVar3);
LAB_004d38b3:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar4;
}

