
undefined8
FUN_005b1690(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,ulong param_4)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 *extraout_RDX;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  byte in_AF;
  bool bVar9;
  byte in_TF;
  byte in_IF;
  byte bVar10;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulong local_18;
  
  uVar3 = 0;
  if ((param_3 & 0xf) == 0) {
    uVar4 = param_4 & 0xf;
    if (uVar4 == 0) {
      local_18 = (ulong)(in_NT & 1) * 0x4000 | (ulong)(in_IF & 1) * 0x200 |
                 (ulong)(in_TF & 1) * 0x100 | (ulong)(uVar4 == 0) * 0x40 | (ulong)(in_AF & 1) * 0x10
                 | (ulong)((POPCOUNT(uVar4) & 1U) == 0) * 4 | (ulong)(in_ID & 1) * 0x200000 |
                 (ulong)(in_VIP & 1) * 0x100000 | (ulong)(in_VIF & 1) * 0x80000 |
                 (ulong)(in_AC & 1) * 0x40000;
      bVar10 = 0;
      FUN_005b0ed0();
      uVar5 = SUB84(extraout_RDX + 2,0);
      iVar1 = (int)extraout_RDX;
      if (((*(uint *)(extraout_RDX + 2) & 0x20) != 0) ||
         (bVar9 = ((ulong)param_1 & 0xf) == 0, bVar9 && ((ulong)param_2 & 0xf) == 0)) {
        xcrypt_ofb((int)(param_4 >> 4),iVar1,uVar5,iVar1 + 0x20,(int)param_2,(int)param_1);
        *extraout_RDX = *extraout_RDX;
        extraout_RDX[1] = extraout_RDX[1];
      }
      else {
        uVar4 = 0x200;
        if (param_4 < 0x200) {
          uVar4 = param_4;
        }
        uVar6 = param_4 & 0x1ff;
        pauVar2 = (undefined1 (*) [16])((long)&local_18 - (~-(ulong)bVar9 & uVar4));
        if (uVar6 == 0) {
          uVar6 = 0x200;
        }
        do {
          if (param_4 < uVar6) {
            uVar6 = param_4;
          }
          pauVar7 = param_1;
          if (((ulong)param_1 & 0xf) != 0) {
            pauVar7 = pauVar2;
          }
          pauVar8 = param_2;
          if (((ulong)param_2 & 0xf) != 0) {
            for (uVar4 = uVar6 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined8 *)*pauVar7 = *(undefined8 *)*pauVar8;
              pauVar8 = (undefined1 (*) [16])(pauVar8[-(ulong)bVar10] + 8);
              pauVar7 = (undefined1 (*) [16])(pauVar7[-(ulong)bVar10] + 8);
            }
            pauVar8 = (undefined1 (*) [16])((long)pauVar7 - uVar6);
            pauVar7 = pauVar8;
          }
          xcrypt_ofb((int)(uVar6 >> 4),iVar1,uVar5,iVar1 + 0x20,(int)pauVar8,(int)pauVar7);
          *extraout_RDX = *extraout_RDX;
          extraout_RDX[1] = extraout_RDX[1];
          if (((ulong)param_1 & 0xf) != 0) {
            pauVar7 = pauVar2;
            for (uVar4 = uVar6 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined8 *)*param_1 = *(undefined8 *)*pauVar7;
              pauVar7 = (undefined1 (*) [16])(pauVar7[-(ulong)bVar10] + 8);
              param_1 = (undefined1 (*) [16])(param_1[-(ulong)bVar10] + 8);
            }
            param_1 = (undefined1 (*) [16])((long)param_1 - uVar6);
          }
          param_1 = (undefined1 (*) [16])(*param_1 + uVar6);
          param_2 = (undefined1 (*) [16])(*param_2 + uVar6);
          param_4 = param_4 - uVar6;
          uVar6 = 0x200;
        } while (param_4 != 0);
        if (pauVar2 != (undefined1 (*) [16])&local_18) {
          do {
            *pauVar2 = (undefined1  [16])0x0;
            pauVar2 = pauVar2 + 1;
          } while (pauVar2 < (undefined1 (*) [16])&local_18);
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

