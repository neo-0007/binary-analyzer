
long FUN_005587e0(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_a4;
  long local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_a4 = FUN_004abd40(param_1,0x85,0,0);
  if (local_a4 < 0) {
    uVar6 = FUN_005bf550();
    lVar7 = FUN_004ab550(uVar6);
    if (lVar7 == 0) {
      lVar5 = 0;
      goto LAB_00558886;
    }
    param_1 = FUN_004ac2c0(lVar7,param_1);
    local_a4 = FUN_004abd40(param_1,0x85,0,0);
  }
  if (param_3 == (code *)0x0) {
    param_3 = FUN_005551d0;
  }
  iVar1 = FUN_005494c0(local_78,param_3,param_4);
  if (iVar1 == 0) {
LAB_00558866:
    lVar5 = 0;
  }
  else {
    iVar1 = FUN_00549640(local_78);
    if (iVar1 == 0) goto LAB_00558866;
    FUN_0051f000();
    local_80 = 0;
    iVar1 = FUN_004abd40(param_1,0x85,0,0);
    if (iVar1 < 0) {
LAB_00558a40:
      iVar1 = FUN_004abd40(param_1,0x80,(long)local_a4,0);
      if (-1 < iVar1) {
        lVar5 = FUN_00558380(param_1,param_2,local_78,param_5,param_6,param_7);
        if (lVar5 != 0) goto LAB_005589d7;
      }
      FUN_0051f1a0();
      goto LAB_00558866;
    }
    lVar5 = FUN_005164c0(&local_80,&DAT_0080656e,0,0,param_7,param_5,param_6);
    if (lVar5 == 0) goto LAB_00558a40;
    iVar2 = FUN_00516140(lVar5,FUN_00549cc0,local_78);
    if (iVar2 != 0) {
      FUN_0051f000();
      while( true ) {
        iVar2 = FUN_005146f0(lVar5,param_1);
        if ((iVar2 != 0) && (local_80 != 0)) {
          FUN_0051f050();
          iVar1 = FUN_0053d9d0(local_80,param_7);
          if (iVar1 == 0) {
            FUN_0040f4f0(local_80);
            local_80 = 0;
            FUN_0051f420();
            FUN_0051f540("../crypto/pem/pem_pkey.c",0x51,"pem_read_bio_key_decoder");
            FUN_0051f8f0(9,0x7e,0);
          }
          else if (param_2 != (long *)0x0) {
            FUN_0040f4f0(*param_2);
            *param_2 = local_80;
          }
          goto LAB_005589c5;
        }
        iVar2 = FUN_004abd40(param_1,2,0,0);
        if (iVar2 != 0) break;
        iVar2 = FUN_004abd40(param_1,0x85,0,0);
        if ((iVar2 < 0) || (iVar2 <= iVar1)) break;
        uVar3 = FUN_0051e920();
        uVar4 = uVar3 & 0x7fffffff;
        if ((uVar3 & 0x80000000) == 0) {
          uVar4 = uVar3 & 0x7fffff;
        }
        if (uVar4 != 0x8010c) break;
        FUN_0051f050();
        FUN_0051f000();
        iVar1 = iVar2;
      }
      FUN_0051f1a0();
    }
LAB_005589c5:
    FUN_00515c80(lVar5);
    lVar5 = local_80;
    if (local_80 == 0) goto LAB_00558a40;
LAB_005589d7:
    FUN_0051f050();
  }
  FUN_00549350(local_78);
  if (lVar7 != 0) {
    FUN_004ac310(lVar7);
    FUN_004ab560(lVar7);
  }
LAB_00558886:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

