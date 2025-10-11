
undefined8 FUN_005b12e0(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 (*pauVar4) [16];
  undefined4 uVar5;
  undefined8 *extraout_RDX;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte in_AF;
  bool bVar11;
  byte in_TF;
  byte in_IF;
  byte bVar12;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulong local_18;
  
  if ((param_3 & 0xf) != 0) {
    return 0;
  }
  uVar8 = param_4 & 0xf;
  if (uVar8 == 0) {
    local_18 = (ulong)(in_NT & 1) * 0x4000 | (ulong)(in_IF & 1) * 0x200 | (ulong)(in_TF & 1) * 0x100
               | (ulong)(uVar8 == 0) * 0x40 | (ulong)(in_AF & 1) * 0x10 |
               (ulong)((POPCOUNT(uVar8) & 1U) == 0) * 4 | (ulong)(in_ID & 1) * 0x200000 |
               (ulong)(in_VIP & 1) * 0x100000 | (ulong)(in_VIF & 1) * 0x80000 |
               (ulong)(in_AC & 1) * 0x40000;
    bVar12 = 0;
    FUN_005b0ed0();
    uVar5 = SUB84(extraout_RDX + 2,0);
    iVar2 = (int)extraout_RDX;
    if (((*(uint *)(extraout_RDX + 2) & 0x20) != 0) ||
       (bVar11 = ((ulong)param_1 & 0xf) == 0, bVar11 && ((ulong)param_2 & 0xf) == 0)) {
      uVar8 = 0x3f;
      if (0x3f < (-(long)((long)param_2 + param_4) & 0xfffU)) {
        uVar8 = 0;
      }
      uVar8 = uVar8 & param_4;
      if (param_4 - uVar8 != 0) {
        xcrypt_cbc((int)(param_4 - uVar8 >> 4),iVar2,uVar5,iVar2 + 0x20,(int)param_2,(int)param_1);
        *extraout_RDX = *extraout_RDX;
        extraout_RDX[1] = extraout_RDX[1];
        if (uVar8 == 0) {
          return 1;
        }
      }
      lVar1 = -uVar8;
      pauVar4 = (undefined1 (*) [16])((long)&local_18 + lVar1);
      puVar9 = param_2;
      puVar10 = (undefined8 *)((long)&local_18 + lVar1);
      for (uVar6 = uVar8 >> 3; param_4 = uVar8, param_2 = (undefined8 *)((long)&local_18 + lVar1),
          uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
        puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
      }
    }
    else {
      uVar8 = 0x200;
      if (param_4 < 0x200) {
        uVar8 = param_4;
      }
      uVar6 = param_4 & 0x1ff;
      pauVar4 = (undefined1 (*) [16])((long)&local_18 - (~-(ulong)bVar11 & uVar8));
      if (uVar6 == 0) {
        uVar6 = 0x200;
      }
      uVar8 = uVar6;
      if (param_4 <= uVar6) {
        puVar9 = param_2;
        if ((undefined1 (*) [16])&local_18 == pauVar4) {
          puVar9 = param_1;
        }
        uVar3 = 0xffffffffffffffc0;
        if (0x3f < (-(long)((long)puVar9 + param_4) & 0xfffU)) {
          uVar3 = uVar6;
        }
        uVar8 = uVar6 & uVar3;
        pauVar7 = pauVar4;
        puVar9 = param_2;
        if ((uVar6 & uVar3) == 0) goto LAB_005b1444;
      }
    }
    while( true ) {
      if (param_4 < uVar8) {
        uVar8 = param_4;
      }
      pauVar7 = (undefined1 (*) [16])param_1;
      if (((ulong)param_1 & 0xf) != 0) {
        pauVar7 = pauVar4;
      }
      puVar9 = param_2;
      if (((ulong)param_2 & 0xf) != 0) {
        for (uVar6 = uVar8 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined8 *)pauVar7 = *puVar9;
          puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
          pauVar7 = (undefined1 (*) [16])((long)pauVar7 + ((ulong)bVar12 * -2 + 1) * 8);
        }
        puVar9 = (undefined8 *)((long)pauVar7 - uVar8);
        pauVar7 = (undefined1 (*) [16])puVar9;
      }
      xcrypt_cbc((int)(uVar8 >> 4),iVar2,uVar5,iVar2 + 0x20,(int)puVar9,(int)pauVar7);
      *extraout_RDX = *extraout_RDX;
      extraout_RDX[1] = extraout_RDX[1];
      if (((ulong)param_1 & 0xf) != 0) {
        pauVar7 = pauVar4;
        for (uVar6 = uVar8 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *param_1 = *(undefined8 *)pauVar7;
          pauVar7 = (undefined1 (*) [16])((long)pauVar7 + ((ulong)bVar12 * -2 + 1) * 8);
          param_1 = param_1 + (ulong)bVar12 * -2 + 1;
        }
        param_1 = (undefined8 *)((long)param_1 - uVar8);
      }
      param_1 = (undefined8 *)((long)param_1 + uVar8);
      puVar9 = (undefined8 *)((long)param_2 + uVar8);
      param_4 = param_4 - uVar8;
      if (param_4 == 0) break;
      uVar8 = 0x200;
      pauVar7 = pauVar4;
      param_2 = puVar9;
      if (param_4 < 0x200) {
LAB_005b1444:
        uVar8 = 0;
        if ((undefined1 (*) [16])&local_18 == pauVar7) {
          uVar8 = param_4;
        }
        lVar1 = -uVar8;
        pauVar4 = (undefined1 (*) [16])((long)pauVar7 + lVar1);
        param_2 = (undefined8 *)((long)pauVar7 + lVar1);
        puVar10 = (undefined8 *)((long)pauVar7 + lVar1);
        for (uVar6 = param_4 >> 3; uVar8 = param_4, uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
          puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
        }
      }
    }
    if (pauVar4 != (undefined1 (*) [16])&local_18) {
      do {
        *pauVar4 = (undefined1  [16])0x0;
        pauVar4 = pauVar4 + 1;
      } while (pauVar4 < (undefined1 (*) [16])&local_18);
    }
    return 1;
  }
  return 0;
}

