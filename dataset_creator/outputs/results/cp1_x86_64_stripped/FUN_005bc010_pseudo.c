
undefined8 *
FUN_005bc010(long param_1,long param_2,int param_3,long param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 *local_68;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    FUN_0051f420();
    plVar4 = (long *)0x0;
    lVar6 = 0;
    FUN_0051f540("../crypto/asn1/p5_scrypt.c",0x36,"PKCS5_pbe2_set_scrypt");
    FUN_0051f8f0(0xd,0xc0102,0);
    puVar8 = (undefined8 *)0x0;
  }
  else {
    iVar1 = FUN_005fec00(0,0,0,0,param_5,param_6,param_7,0,0,0);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/p5_scrypt.c",0x3b,"PKCS5_pbe2_set_scrypt");
      uVar5 = 0xe3;
    }
    else {
      iVar1 = FUN_0040a260(param_1);
      if (iVar1 != 0) {
        plVar4 = (long *)FUN_005bb8f0();
        if (plVar4 == (long *)0x0) {
LAB_005bc2a8:
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)plVar4[1];
          uVar5 = FUN_004239c0(iVar1);
          *puVar8 = uVar5;
          lVar6 = FUN_004a7f10();
          puVar8[1] = lVar6;
          if (lVar6 == 0) goto LAB_005bc2a8;
          iVar2 = FUN_00409910(param_1);
          if (iVar2 != 0) {
            if (param_4 != 0) {
              iVar2 = FUN_00409910(param_1);
              FUN_00771fb0(local_58,param_4,(long)iVar2,0x10);
              goto LAB_005bc0fa;
            }
            uVar3 = FUN_00409910(param_1);
            iVar2 = FUN_00429650(local_58,uVar3);
            lVar6 = 0;
            if (0 < iVar2) goto LAB_005bc0fa;
LAB_005bc410:
            puVar8 = (undefined8 *)0x0;
            goto LAB_005bc2e0;
          }
LAB_005bc0fa:
          lVar6 = FUN_00535890();
          if (lVar6 == 0) goto LAB_005bc2a8;
          iVar2 = FUN_00538a80(lVar6,param_1,0,0,local_58,0);
          if (iVar2 == 0) goto LAB_005bc410;
          iVar2 = FUN_0040a7f0(lVar6,puVar8[1]);
          if (iVar2 < 1) {
            FUN_0051f420();
            puVar8 = (undefined8 *)0x0;
            FUN_0051f540("../crypto/asn1/p5_scrypt.c",0x61,"PKCS5_pbe2_set_scrypt");
            FUN_0051f8f0(0xd,0x72,0);
            goto LAB_005bc2e0;
          }
          lVar9 = 0;
          FUN_00537b70(lVar6);
          if (iVar1 == 0x25) {
            iVar1 = FUN_0040a170(param_1);
            lVar9 = (long)iVar1;
          }
          FUN_004a87e0(*plVar4);
          plVar7 = (long *)FUN_005bbfd0();
          if (plVar7 == (long *)0x0) {
LAB_005bc328:
            local_68 = (undefined8 *)0x0;
LAB_005bc331:
            FUN_0051f420();
            FUN_0051f540("../crypto/asn1/p5_scrypt.c",0xcc,"pkcs5_scrypt_set");
            FUN_0051f8f0(0xd,0xc0100,0);
LAB_005bc364:
            puVar8 = (undefined8 *)0x0;
            FUN_005bbff0(plVar7);
            FUN_004a87e0(local_68);
            *plVar4 = 0;
          }
          else {
            iVar1 = 8;
            if (param_3 != 0) {
              iVar1 = param_3;
            }
            iVar2 = FUN_004a1fa0(*plVar7,param_2,iVar1);
            if (iVar2 == 0) goto LAB_005bc328;
            if ((param_2 == 0) &&
               (iVar1 = FUN_00429650(*(undefined8 *)(*plVar7 + 8),iVar1), iVar1 < 1)) {
              local_68 = (undefined8 *)0x0;
              goto LAB_005bc364;
            }
            iVar1 = FUN_0049f980(plVar7[1],param_5);
            if (((iVar1 == 0) || (iVar1 = FUN_0049f980(plVar7[2],param_6), iVar1 == 0)) ||
               (iVar1 = FUN_0049f980(plVar7[3],param_7), iVar1 == 0)) goto LAB_005bc328;
            if (lVar9 != 0) {
              lVar6 = FUN_004a7700();
              plVar7[4] = lVar6;
              if ((lVar6 == 0) || (iVar1 = FUN_0049f880(lVar6,lVar9), iVar1 == 0))
              goto LAB_005bc328;
            }
            local_68 = (undefined8 *)FUN_004a87c0();
            if (local_68 == (undefined8 *)0x0) goto LAB_005bc328;
            uVar5 = FUN_004239c0(0x3cd);
            *local_68 = uVar5;
            uVar5 = FUN_005bbf60();
            lVar6 = FUN_004a1240(uVar5,plVar7,local_68 + 1);
            if (lVar6 == 0) goto LAB_005bc331;
            FUN_005bbff0(plVar7);
            *plVar4 = (long)local_68;
            puVar8 = (undefined8 *)FUN_004a87c0();
            if (puVar8 == (undefined8 *)0x0) goto LAB_005bc2a8;
            uVar5 = FUN_004239c0(0xa1);
            *puVar8 = uVar5;
            uVar5 = FUN_005bb880();
            lVar6 = FUN_004a1240(uVar5,plVar4,puVar8 + 1);
            if (lVar6 != 0) {
              FUN_005bb910(plVar4);
              goto LAB_005bc2fb;
            }
          }
        }
        FUN_0051f420();
        lVar6 = 0;
        FUN_0051f540("../crypto/asn1/p5_scrypt.c",0x89,"PKCS5_pbe2_set_scrypt");
        FUN_0051f8f0(0xd,0xc0100,0);
        goto LAB_005bc2e0;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/p5_scrypt.c",0x41,"PKCS5_pbe2_set_scrypt");
      uVar5 = 0x6c;
    }
    plVar4 = (long *)0x0;
    lVar6 = 0;
    FUN_0051f8f0(0xd,uVar5,0);
    puVar8 = (undefined8 *)0x0;
  }
LAB_005bc2e0:
  FUN_005bb910(plVar4);
  FUN_004a87e0(puVar8);
  puVar8 = (undefined8 *)0x0;
  FUN_00537b70(lVar6);
LAB_005bc2fb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return puVar8;
}

