
undefined8 FUN_005b10b0(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined4 uVar4;
  long extraout_RDX;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  byte in_AF;
  bool bVar10;
  byte in_TF;
  byte in_IF;
  byte bVar11;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  ulong local_18;
  
  if ((param_3 & 0xf) != 0) {
    return 0;
  }
  uVar7 = param_4 & 0xf;
  if (uVar7 == 0) {
    local_18 = (ulong)(in_NT & 1) * 0x4000 | (ulong)(in_IF & 1) * 0x200 | (ulong)(in_TF & 1) * 0x100
               | (ulong)(uVar7 == 0) * 0x40 | (ulong)(in_AF & 1) * 0x10 |
               (ulong)((POPCOUNT(uVar7) & 1U) == 0) * 4 | (ulong)(in_ID & 1) * 0x200000 |
               (ulong)(in_VIP & 1) * 0x100000 | (ulong)(in_VIF & 1) * 0x80000 |
               (ulong)(in_AC & 1) * 0x40000;
    bVar11 = 0;
    FUN_005b0ed0();
    uVar4 = SUB84((uint *)(extraout_RDX + 0x10),0);
    if (((*(uint *)(extraout_RDX + 0x10) & 0x20) != 0) ||
       (bVar10 = ((ulong)param_1 & 0xf) == 0, bVar10 && ((ulong)param_2 & 0xf) == 0)) {
      uVar7 = 0x7f;
      if (0x7f < (-(long)((long)param_2 + param_4) & 0xfffU)) {
        uVar7 = 0;
      }
      uVar7 = uVar7 & param_4;
      if ((param_4 - uVar7 != 0) &&
         (xcrypt_ecb((int)(param_4 - uVar7 >> 4),uVar4,(int)extraout_RDX + 0x20,(int)param_2,
                     (int)param_1), uVar7 == 0)) {
        return 1;
      }
      lVar1 = -uVar7;
      pauVar3 = (undefined1 (*) [16])((long)&local_18 + lVar1);
      puVar8 = param_2;
      puVar9 = (undefined8 *)((long)&local_18 + lVar1);
      for (uVar5 = uVar7 >> 3; param_4 = uVar7, param_2 = (undefined8 *)((long)&local_18 + lVar1),
          uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
        puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
      }
    }
    else {
      uVar7 = 0x200;
      if (param_4 < 0x200) {
        uVar7 = param_4;
      }
      uVar5 = param_4 & 0x1ff;
      pauVar3 = (undefined1 (*) [16])((long)&local_18 - (~-(ulong)bVar10 & uVar7));
      if (uVar5 == 0) {
        uVar5 = 0x200;
      }
      uVar7 = uVar5;
      if (param_4 <= uVar5) {
        puVar8 = param_2;
        if ((undefined1 (*) [16])&local_18 == pauVar3) {
          puVar8 = param_1;
        }
        uVar2 = 0xffffffffffffff80;
        if (0x7f < (-(long)((long)puVar8 + param_4) & 0xfffU)) {
          uVar2 = uVar5;
        }
        uVar7 = uVar5 & uVar2;
        pauVar6 = pauVar3;
        puVar8 = param_2;
        if ((uVar5 & uVar2) == 0) goto LAB_005b120b;
      }
    }
    while( true ) {
      if (param_4 < uVar7) {
        uVar7 = param_4;
      }
      pauVar6 = (undefined1 (*) [16])param_1;
      if (((ulong)param_1 & 0xf) != 0) {
        pauVar6 = pauVar3;
      }
      puVar8 = param_2;
      if (((ulong)param_2 & 0xf) != 0) {
        for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined8 *)pauVar6 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
          pauVar6 = (undefined1 (*) [16])((long)pauVar6 + ((ulong)bVar11 * -2 + 1) * 8);
        }
        puVar8 = (undefined8 *)((long)pauVar6 - uVar7);
        pauVar6 = (undefined1 (*) [16])puVar8;
      }
      xcrypt_ecb((int)(uVar7 >> 4),uVar4,(int)extraout_RDX + 0x20,(int)puVar8,(int)pauVar6);
      if (((ulong)param_1 & 0xf) != 0) {
        pauVar6 = pauVar3;
        for (uVar5 = uVar7 >> 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *param_1 = *(undefined8 *)pauVar6;
          pauVar6 = (undefined1 (*) [16])((long)pauVar6 + ((ulong)bVar11 * -2 + 1) * 8);
          param_1 = param_1 + (ulong)bVar11 * -2 + 1;
        }
        param_1 = (undefined8 *)((long)param_1 - uVar7);
      }
      param_1 = (undefined8 *)((long)param_1 + uVar7);
      puVar8 = (undefined8 *)((long)param_2 + uVar7);
      param_4 = param_4 - uVar7;
      if (param_4 == 0) break;
      uVar7 = 0x200;
      pauVar6 = pauVar3;
      param_2 = puVar8;
      if (param_4 < 0x200) {
LAB_005b120b:
        uVar7 = 0;
        if ((undefined1 (*) [16])&local_18 == pauVar6) {
          uVar7 = param_4;
        }
        lVar1 = -uVar7;
        pauVar3 = (undefined1 (*) [16])((long)pauVar6 + lVar1);
        param_2 = (undefined8 *)((long)pauVar6 + lVar1);
        puVar9 = (undefined8 *)((long)pauVar6 + lVar1);
        for (uVar5 = param_4 >> 3; uVar7 = param_4, uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
          puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
        }
      }
    }
    if (pauVar3 != (undefined1 (*) [16])&local_18) {
      do {
        *pauVar3 = (undefined1  [16])0x0;
        pauVar3 = pauVar3 + 1;
      } while (pauVar3 < (undefined1 (*) [16])&local_18);
    }
    return 1;
  }
  return 0;
}

