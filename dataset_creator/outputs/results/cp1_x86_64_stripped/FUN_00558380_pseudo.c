
long FUN_00558380(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_468 = 0;
  local_460 = 0;
  local_458 = 0;
  FUN_0051f000();
  if ((param_6 & 1) == 0) {
    pcVar2 = "SM2 PARAMETERS";
    if ((param_6 & 2) != 0) {
      pcVar2 = "SM2 PUBLIC KEY";
    }
    iVar4 = FUN_00557780(&local_458,&local_450,&local_468,pcVar2 + 4,param_1,FUN_00549cc0);
  }
  else {
    iVar4 = FUN_005577a0(&local_458,&local_450,&local_468,"ANY PRIVATE KEY",param_1,FUN_00549cc0,
                         param_3);
  }
  if (iVar4 == 0) {
    FUN_0051f050();
    lVar7 = 0;
    goto LAB_00558559;
  }
  FUN_0051f1a0();
  uVar3 = local_468;
  local_460 = local_458;
  iVar4 = thunk_FUN_00712780(local_468,"PRIVATE KEY");
  if (iVar4 == 0) {
    lVar5 = FUN_004a2bb0(0,&local_460,CONCAT44(uStack_44c,local_450));
    if (lVar5 != 0) {
      lVar7 = FUN_005fde40(lVar5,param_4,param_5);
      if (param_2 != (long *)0x0) {
        FUN_0040f4f0(*param_2);
        *param_2 = lVar7;
      }
      FUN_004a2c30(lVar5);
      goto LAB_00558651;
    }
    goto LAB_00558518;
  }
  iVar4 = thunk_FUN_00712780(uVar3,"ENCRYPTED PRIVATE KEY");
  if (iVar4 == 0) {
    lVar5 = FUN_004a93e0(0,&local_460,CONCAT44(uStack_44c,local_450));
    if (lVar5 == 0) {
LAB_00558518:
      lVar7 = FUN_0051e9f0();
joined_r0x00558662:
      if (lVar7 != 0) goto LAB_00558526;
      FUN_0051f420();
      lVar7 = 0;
      FUN_0051f540("../crypto/pem/pem_pkey.c",199,"pem_read_bio_key_legacy");
      FUN_0051f8f0(9,0x8000d,0);
    }
    else {
      iVar4 = FUN_00549cc0(local_448,0x400,0,param_3);
      if (-1 < iVar4) {
        lVar6 = FUN_0055c9b0(lVar5,local_448,iVar4);
        FUN_004a9460(lVar5);
        FUN_004227b0(local_448,(long)iVar4);
        if (lVar6 != 0) {
          lVar7 = FUN_005fde40(lVar6,param_4,param_5);
          if (param_2 != (long *)0x0) {
            FUN_0040f4f0(*param_2);
            *param_2 = lVar7;
          }
          FUN_004a2c30(lVar6);
          if (lVar7 != 0) goto LAB_00558530;
        }
        goto LAB_00558518;
      }
      FUN_0051f420();
      lVar7 = 0;
      FUN_0051f540("../crypto/pem/pem_pkey.c",0x9b,"pem_read_bio_key_legacy");
      FUN_0051f8f0(9,0x68,0);
      FUN_004a9460(lVar5);
    }
  }
  else {
    iVar4 = FUN_00557110(uVar3,"PRIVATE KEY");
    if (0 < iVar4) {
      puVar8 = (undefined4 *)FUN_004a14a0(0,local_468,iVar4);
      if ((puVar8 == (undefined4 *)0x0) || (*(long *)(puVar8 + 0x2e) == 0)) goto LAB_00558518;
      lVar7 = FUN_005ba5a0(*puVar8,param_2,&local_460,CONCAT44(uStack_44c,local_450),param_4,param_5
                          );
LAB_00558651:
      if (lVar7 != 0) goto LAB_00558530;
      lVar7 = FUN_0051e9f0();
      goto joined_r0x00558662;
    }
    if ((param_6 & 2) != 0) {
      lVar7 = FUN_005aeb40(param_2,&local_460,CONCAT44(uStack_44c,local_450));
      goto LAB_00558651;
    }
    iVar4 = FUN_00557110(local_468,"PARAMETERS");
    if (iVar4 < 1) goto LAB_00558518;
    lVar7 = FUN_0040ec60();
    if (lVar7 != 0) {
      iVar4 = FUN_0040f3f0(lVar7,local_468,iVar4);
      if (((iVar4 != 0) && (pcVar1 = *(code **)(*(long *)(lVar7 + 8) + 0x70), pcVar1 != (code *)0x0)
          ) && (iVar4 = (*pcVar1)(lVar7,&local_460,local_450), iVar4 != 0)) {
        if (param_2 != (long *)0x0) {
          FUN_0040f4f0(*param_2);
          *param_2 = lVar7;
        }
        goto LAB_00558530;
      }
      FUN_0040f4f0(lVar7);
    }
LAB_00558526:
    lVar7 = 0;
  }
LAB_00558530:
  FUN_0041c010(local_468,"../crypto/pem/pem_pkey.c",0xc9);
  FUN_0041c0b0(local_458,CONCAT44(uStack_44c,local_450),"../crypto/pem/pem_pkey.c",0xca);
LAB_00558559:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar7;
}

