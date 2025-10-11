
undefined4 FUN_004215d0(undefined8 *param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  
  iVar3 = FUN_004222a0(param_1[4]);
  if (iVar3 != 0) {
    bVar2 = *(byte *)(param_1 + 9);
    uVar4 = 1;
    FUN_004222e0(param_1[4]);
    if ((bVar2 & 1) == 0) {
      return 1;
    }
    iVar3 = FUN_004222c0(param_1[4]);
    if (iVar3 != 0) {
      if ((*(byte *)(param_1 + 9) & 1) != 0) {
        ppuVar7 = &PTR_s_default_0091b600;
        iVar3 = 0;
        puVar8 = PTR_s_default_0091b600;
        if (PTR_s_default_0091b600 != (undefined *)0x0) {
          do {
            if (((ulong)ppuVar7[4] & 1) != 0) {
              lVar6 = FUN_00421090(puVar8,ppuVar7[2],0);
              if (lVar6 == 0) goto LAB_004216e0;
              *(undefined8 *)(lVar6 + 0x50) = *param_1;
              uVar4 = FUN_0051ece0();
              *(undefined4 *)(lVar6 + 0x60) = uVar4;
              iVar5 = FUN_0041f700(lVar6,0,0);
              if (iVar5 < 0) {
                uVar4 = 0;
                FUN_00420d40(lVar6);
                goto LAB_004216c4;
              }
              *(undefined8 **)(lVar6 + 0x58) = param_1;
              iVar5 = FUN_00435f80(param_1[1],lVar6);
              if (iVar5 == 0) {
                FUN_00420d40(lVar6);
                uVar4 = 0;
                goto LAB_004216c4;
              }
              iVar3 = iVar3 + 1;
            }
            ppuVar1 = ppuVar7 + 5;
            ppuVar7 = ppuVar7 + 5;
            puVar8 = *ppuVar1;
          } while (*ppuVar1 != (undefined *)0x0);
          if (iVar3 != 0) {
            *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
            uVar4 = 1;
            goto LAB_004216c4;
          }
        }
LAB_004216e0:
        uVar4 = 0;
      }
LAB_004216c4:
      FUN_004222e0(param_1[4]);
      return uVar4;
    }
  }
  return 0;
}

