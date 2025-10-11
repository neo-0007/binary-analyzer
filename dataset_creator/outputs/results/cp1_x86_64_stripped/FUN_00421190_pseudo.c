
long FUN_00421190(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = FUN_00417730(param_1,1,&DAT_008de180);
  if (lVar6 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    lVar6 = 0;
  }
  else {
    if (param_3 == (undefined *)0x0) {
      ppuVar8 = &PTR_s_default_0091b600;
      puVar7 = PTR_s_default_0091b600;
      while (puVar7 != (undefined *)0x0) {
        iVar5 = thunk_FUN_00712780(puVar7,param_2);
        if (iVar5 == 0) {
          param_3 = ppuVar8[2];
          puVar7 = ppuVar8[3];
          goto LAB_004211fb;
        }
        ppuVar1 = ppuVar8 + 5;
        ppuVar8 = ppuVar8 + 5;
        puVar7 = *ppuVar1;
      }
      iVar5 = FUN_004222a0(*(undefined8 *)(lVar6 + 0x20));
      if (iVar5 == 0) {
        lVar6 = 0;
        goto LAB_0042121c;
      }
      lVar3 = *(long *)(lVar6 + 0x38);
      puVar9 = *(undefined8 **)(lVar6 + 0x30);
      if (lVar3 != 0) {
        lVar10 = 0;
        do {
          iVar5 = thunk_FUN_00712780(*puVar9,param_2);
          if (iVar5 == 0) {
            param_3 = (undefined *)puVar9[2];
            puVar7 = (undefined *)puVar9[3];
            goto LAB_00421354;
          }
          puVar9 = puVar9 + 5;
          lVar10 = lVar10 + 1;
        } while (lVar10 != lVar3);
      }
      puVar7 = (undefined *)0x0;
LAB_00421354:
      FUN_004222e0(*(undefined8 *)(lVar6 + 0x20));
    }
    else {
      puVar7 = (undefined *)0x0;
    }
LAB_004211fb:
    lVar6 = FUN_00421090(param_2,param_3,puVar7);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x50) = param_1;
      uVar4 = FUN_0051ece0();
      *(undefined4 *)(lVar6 + 0x60) = uVar4;
    }
  }
LAB_0042121c:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

