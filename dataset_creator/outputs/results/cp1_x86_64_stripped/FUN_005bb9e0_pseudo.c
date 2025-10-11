
undefined8 *
FUN_005bb9e0(int param_1,long param_2,int param_3,int param_4,int param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar3 = (undefined8 *)FUN_005bb9a0();
  if ((puVar3 != (undefined8 *)0x0) && (piVar4 = (int *)FUN_004a7670(), piVar4 != (int *)0x0)) {
    puVar1 = (undefined4 *)*puVar3;
    *(int **)(puVar1 + 2) = piVar4;
    *puVar1 = 4;
    if (-1 < param_3) {
      lVar8 = (long)param_3;
      if (param_3 == 0) {
        lVar8 = 8;
        param_3 = 8;
      }
      lVar5 = FUN_0041ad90(lVar8,"../crypto/asn1/p5_pbev2.c",0xb8);
      *(long *)(piVar4 + 2) = lVar5;
      if (lVar5 != 0) {
        *piVar4 = param_3;
        if (param_2 == 0) {
          iVar2 = FUN_00429580(param_6,lVar5,lVar8,0);
          if (iVar2 < 1) goto LAB_005bbb47;
        }
        else {
          thunk_FUN_00713a50(lVar5,param_2,lVar8);
        }
        if (param_1 < 1) {
          param_1 = 0x800;
        }
        iVar2 = thunk_FUN_0049f880(puVar3[1],(long)param_1);
        if (iVar2 != 0) {
          if (0 < param_5) {
            lVar8 = FUN_004a7700();
            puVar3[2] = lVar8;
            if ((lVar8 == 0) || (iVar2 = thunk_FUN_0049f880(lVar8,(long)param_5), iVar2 == 0))
            goto LAB_005bbb47;
          }
          if ((0 < param_4) && (param_4 != 0xa3)) {
            lVar8 = FUN_004a87c0();
            puVar3[3] = lVar8;
            if (lVar8 == 0) goto LAB_005bbb47;
            uVar6 = FUN_004239c0(param_4);
            FUN_004a8880(puVar3[3],uVar6,5,0);
          }
          puVar7 = (undefined8 *)FUN_004a87c0();
          if (puVar7 != (undefined8 *)0x0) {
            uVar6 = FUN_004239c0(0x45);
            *puVar7 = uVar6;
            uVar6 = FUN_005bb930();
            lVar8 = FUN_004a1240(uVar6,puVar3,puVar7 + 1);
            if (lVar8 != 0) {
              FUN_005bb9c0(puVar3);
              return puVar7;
            }
            goto LAB_005bbb4a;
          }
        }
      }
    }
  }
LAB_005bbb47:
  puVar7 = (undefined8 *)0x0;
LAB_005bbb4a:
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/p5_pbev2.c",0xeb,"PKCS5_pbkdf2_set_ex");
  FUN_0051f8f0(0xd,0xc0100,0);
  FUN_005bb9c0(puVar3);
  FUN_004a87e0(puVar7);
  return (undefined8 *)0x0;
}

