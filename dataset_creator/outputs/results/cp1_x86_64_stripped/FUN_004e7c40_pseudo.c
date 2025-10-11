
undefined4 FUN_004e7c40(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  undefined4 local_cc;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  local_b8 = *puVar1;
  uStack_b0 = puVar1[1];
  local_a8 = puVar1[2];
  uStack_a0 = puVar1[3];
  local_98 = puVar1[4];
  uStack_90 = puVar1[5];
  local_88 = puVar1[6];
  uStack_80 = puVar1[7];
  local_78 = puVar1[8];
  uStack_70 = puVar1[9];
  local_68 = puVar1[10];
  uStack_60 = puVar1[0xb];
  local_58 = puVar1[0xc];
  uStack_50 = puVar1[0xd];
  iVar2 = FUN_004e7ab0(&local_cc,&local_c0,&local_b8);
  if (iVar2 == 0) {
    uVar7 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_ameth.c",0xae,"eckey_priv_encode");
    FUN_0051f8f0(0x10,0x8e,0);
  }
  else {
    uVar3 = FUN_004ee630(&local_b8);
    FUN_004ee640(&local_b8,uVar3 | 1);
    iVar2 = FUN_004ea4a0(&local_b8,0);
    if (iVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_ameth.c",0xbd,"eckey_priv_encode");
      FUN_0051f8f0(0x10,0x80010,0);
      uVar7 = 0;
    }
    else {
      lVar5 = FUN_0041ad90((long)iVar2,"../crypto/ec/ec_ameth.c",0xc0);
      if (lVar5 == 0) {
        FUN_0051f420();
        uVar7 = 0;
        FUN_0051f540("../crypto/ec/ec_ameth.c",0xc2,"eckey_priv_encode");
        FUN_0051f8f0(0x10,0xc0100,0);
      }
      else {
        local_c8 = lVar5;
        iVar4 = FUN_004ea4a0(&local_b8,&local_c8);
        if (iVar4 == 0) {
          uVar7 = 0;
          FUN_0041ad60(lVar5,"../crypto/ec/ec_ameth.c",199);
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_ameth.c",200,"eckey_priv_encode");
          FUN_0051f8f0(0x10,0x80010,0);
        }
        else {
          uVar6 = FUN_004239c0(0x198);
          iVar2 = FUN_004a2c50(param_1,uVar6,0,local_cc,local_c0,lVar5,iVar2);
          if (iVar2 == 0) {
            FUN_0041ad60(lVar5,"../crypto/ec/ec_ameth.c",0xce);
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

