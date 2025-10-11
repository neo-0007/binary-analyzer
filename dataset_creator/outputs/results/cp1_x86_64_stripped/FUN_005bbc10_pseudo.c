
undefined8 *
FUN_005bbc10(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            long param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  int local_5c;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = param_6;
  iVar1 = FUN_0040a260();
  if (iVar1 == 0) {
    FUN_0051f420();
    plVar4 = (long *)0x0;
    lVar6 = 0;
    puVar8 = (undefined8 *)0x0;
    FUN_0051f540("../crypto/asn1/p5_pbev2.c",0x37,"PKCS5_pbe2_set_iv_ex");
    FUN_0051f8f0(0xd,0x6c,0);
  }
  else {
    plVar4 = (long *)FUN_005bb8f0();
    if (plVar4 == (long *)0x0) {
LAB_005bbda0:
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar8 = (undefined8 *)plVar4[1];
      uVar5 = FUN_004239c0(iVar1);
      *puVar8 = uVar5;
      lVar6 = FUN_004a7f10();
      puVar8[1] = lVar6;
      if (lVar6 == 0) goto LAB_005bbda0;
      iVar2 = FUN_00409910(param_1);
      if (0 < iVar2) {
        if (param_5 != 0) {
          FUN_00771fb0(local_58,param_5,(long)iVar2,0x10);
          goto LAB_005bbcbc;
        }
        iVar2 = FUN_00429580(param_7,local_58,(long)iVar2,0);
        if (0 < iVar2) goto LAB_005bbcbc;
        lVar6 = 0;
LAB_005bbe80:
        puVar8 = (undefined8 *)0x0;
        goto LAB_005bbdd5;
      }
LAB_005bbcbc:
      lVar6 = FUN_00535890();
      if (lVar6 == 0) goto LAB_005bbda0;
      iVar2 = FUN_00538a80(lVar6,param_1,0,0,local_58,0);
      if (iVar2 == 0) goto LAB_005bbe80;
      iVar2 = FUN_0040a7f0(lVar6,puVar8[1]);
      if (iVar2 < 1) {
        FUN_0051f420();
        puVar8 = (undefined8 *)0x0;
        FUN_0051f540("../crypto/asn1/p5_pbev2.c",0x55,"PKCS5_pbe2_set_iv_ex");
        FUN_0051f8f0(0xd,0x72,0);
        goto LAB_005bbdd5;
      }
      FUN_0051f000();
      if (local_5c == -1) {
        iVar2 = FUN_00536c00(lVar6,7,0,&local_5c);
        if (iVar2 < 1) {
          local_5c = 799;
        }
      }
      FUN_0051f050();
      uVar3 = 0xffffffff;
      FUN_00537b70(lVar6);
      if (iVar1 == 0x25) {
        uVar3 = FUN_0040a170(param_1);
      }
      FUN_004a87e0(*plVar4);
      lVar6 = FUN_005bb9e0(param_2,param_3,param_4,local_5c,uVar3,param_7);
      *plVar4 = lVar6;
      if (lVar6 == 0) goto LAB_005bbda0;
      puVar7 = (undefined8 *)FUN_004a87c0();
      if (puVar7 == (undefined8 *)0x0) goto LAB_005bbda0;
      uVar5 = FUN_004239c0(0xa1);
      *puVar7 = uVar5;
      uVar5 = FUN_005bb880();
      lVar6 = FUN_004a1240(uVar5,plVar4,puVar7 + 1);
      if (lVar6 != 0) {
        FUN_005bb910(plVar4);
        goto LAB_005bbdf0;
      }
    }
    FUN_0051f420();
    lVar6 = 0;
    FUN_0051f540("../crypto/asn1/p5_pbev2.c",0x89,"PKCS5_pbe2_set_iv_ex");
    FUN_0051f8f0(0xd,0xc0100,0);
    puVar8 = puVar7;
  }
LAB_005bbdd5:
  FUN_00537b70(lVar6);
  FUN_005bb910(plVar4);
  puVar7 = (undefined8 *)0x0;
  FUN_004a87e0(puVar8);
LAB_005bbdf0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

