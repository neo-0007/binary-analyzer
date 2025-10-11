
undefined8
padlock_ctr32_encrypt(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long extraout_RDX;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  byte in_AF;
  bool bVar13;
  byte in_TF;
  byte in_IF;
  byte bVar14;
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
  if (uVar8 != 0) {
    return 0;
  }
  local_18 = (ulong)(in_NT & 1) * 0x4000 | (ulong)(in_IF & 1) * 0x200 | (ulong)(in_TF & 1) * 0x100 |
             (ulong)(uVar8 == 0) * 0x40 | (ulong)(in_AF & 1) * 0x10 |
             (ulong)((POPCOUNT(uVar8) & 1U) == 0) * 4 | (ulong)(in_ID & 1) * 0x200000 |
             (ulong)(in_VIP & 1) * 0x100000 | (ulong)(in_VIF & 1) * 0x80000 |
             (ulong)(in_AC & 1) * 0x40000;
  bVar14 = 0;
  _padlock_verify_ctx();
  uVar10 = SUB84((uint *)(extraout_RDX + 0x10),0);
  iVar2 = (int)extraout_RDX;
  if (((*(uint *)(extraout_RDX + 0x10) & 0x20) != 0) ||
     (bVar13 = ((ulong)param_1 & 0xf) == 0, bVar13 && ((ulong)param_2 & 0xf) == 0)) {
    uVar3 = -(*(uint *)(extraout_RDX + 0xc) >> 0x18 |
             (*(uint *)(extraout_RDX + 0xc) & 0xff0000) >> 8) & 0xffff;
    uVar8 = (ulong)(uVar3 << 4);
    if (uVar3 == 0) {
      uVar8 = 0x100000;
    }
    uVar5 = uVar8;
    if (param_4 <= uVar8) {
      uVar5 = param_4;
    }
    uVar9 = param_4;
    if (uVar8 < param_4) {
      do {
        xcrypt_ctr((int)(uVar5 >> 4),iVar2,uVar10,iVar2 + 0x20,(int)param_2,(int)param_1);
        uVar3 = *(uint *)(extraout_RDX + 0xc);
        uVar4 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) +
                0x10000;
        *(uint *)(extraout_RDX + 0xc) =
             uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
             (uVar3 >> 0x18) << 0x18;
        param_4 = param_4 - uVar5;
        uVar5 = 0x100000;
        if (param_4 == 0) {
          return 1;
        }
        uVar9 = param_4;
      } while (0xfffff < param_4);
    }
    param_4 = 0x1f;
    if (0x1f < (-(long)((long)param_2 + uVar9) & 0xfffU)) {
      param_4 = 0;
    }
    param_4 = param_4 & uVar9;
    if ((uVar9 - param_4 != 0) &&
       (xcrypt_ctr((int)(uVar9 - param_4 >> 4),iVar2,uVar10,iVar2 + 0x20,(int)param_2,(int)param_1),
       param_4 == 0)) {
      return 1;
    }
    lVar1 = -param_4;
    pauVar7 = (undefined1 (*) [16])((long)&local_18 + lVar1);
    puVar6 = (undefined8 *)((long)&local_18 + lVar1);
    puVar12 = (undefined8 *)((long)&local_18 + lVar1);
    for (uVar8 = param_4 >> 3; uVar5 = param_4, uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = *param_2;
      param_2 = param_2 + (ulong)bVar14 * -2 + 1;
      puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
    }
  }
  else {
    uVar8 = 0x200;
    if (param_4 < 0x200) {
      uVar8 = param_4;
    }
    pauVar7 = (undefined1 (*) [16])((long)&local_18 - (~-(ulong)bVar13 & uVar8));
    uVar3 = -(*(uint *)(extraout_RDX + 0xc) >> 0x18) & 0x1f;
    uVar5 = (ulong)(uVar3 << 4);
    if (uVar3 == 0) {
      uVar5 = 0x200;
    }
    if (param_4 <= uVar5) {
      uVar5 = param_4;
    }
    puVar6 = param_2;
    if (param_4 <= uVar5) {
      if ((undefined1 (*) [16])&local_18 == pauVar7) {
        puVar6 = param_1;
      }
      uVar8 = 0xffffffffffffffe0;
      if (0x1f < (-(long)((long)puVar6 + param_4) & 0xfffU)) {
        uVar8 = uVar5;
      }
      uVar5 = uVar5 & uVar8;
      pauVar11 = pauVar7;
      goto joined_r0x0059e953;
    }
  }
  while( true ) {
    if (param_4 < uVar5) {
      uVar5 = param_4;
    }
    pauVar11 = (undefined1 (*) [16])param_1;
    if (((ulong)param_1 & 0xf) != 0) {
      pauVar11 = pauVar7;
    }
    puVar12 = puVar6;
    if (((ulong)puVar6 & 0xf) != 0) {
      for (uVar8 = uVar5 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined8 *)pauVar11 = *puVar12;
        puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
        pauVar11 = (undefined1 (*) [16])((long)pauVar11 + ((ulong)bVar14 * -2 + 1) * 8);
      }
      puVar12 = (undefined8 *)((long)pauVar11 - uVar5);
      pauVar11 = (undefined1 (*) [16])puVar12;
    }
    xcrypt_ctr((int)(uVar5 >> 4),iVar2,uVar10,iVar2 + 0x20,(int)puVar12,(int)pauVar11);
    uVar3 = *(uint *)(extraout_RDX + 0xc);
    if ((uVar3 & 0xffff0000) == 0) {
      uVar4 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) +
              0x10000;
      *(uint *)(extraout_RDX + 0xc) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | (uVar3 >> 0x18) << 0x18
      ;
    }
    if (((ulong)param_1 & 0xf) != 0) {
      pauVar11 = pauVar7;
      for (uVar8 = uVar5 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *param_1 = *(undefined8 *)pauVar11;
        pauVar11 = (undefined1 (*) [16])((long)pauVar11 + ((ulong)bVar14 * -2 + 1) * 8);
        param_1 = param_1 + (ulong)bVar14 * -2 + 1;
      }
      param_1 = (undefined8 *)((long)param_1 - uVar5);
    }
    param_1 = (undefined8 *)((long)param_1 + uVar5);
    param_2 = (undefined8 *)((long)puVar6 + uVar5);
    param_4 = param_4 - uVar5;
    if (param_4 == 0) break;
    uVar5 = 0x200;
    puVar6 = param_2;
    if (param_4 < 0x200) {
      if ((undefined1 (*) [16])&local_18 == pauVar7) {
        puVar6 = param_1;
      }
      uVar5 = 0xffffffffffffffe0;
      if (0x1f < (-(long)((long)puVar6 + param_4) & 0xfffU)) {
        uVar5 = param_4;
      }
      uVar5 = param_4 & uVar5;
      pauVar11 = pauVar7;
joined_r0x0059e953:
      pauVar7 = pauVar11;
      puVar6 = param_2;
      if (uVar5 == 0) {
        uVar8 = 0;
        if ((undefined1 (*) [16])&local_18 == pauVar11) {
          uVar8 = param_4;
        }
        lVar1 = -uVar8;
        pauVar7 = (undefined1 (*) [16])((long)pauVar11 + lVar1);
        puVar6 = (undefined8 *)((long)pauVar11 + lVar1);
        puVar12 = (undefined8 *)((long)pauVar11 + lVar1);
        for (uVar8 = param_4 >> 3; uVar5 = param_4, uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar12 = *param_2;
          param_2 = param_2 + (ulong)bVar14 * -2 + 1;
          puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
        }
      }
    }
  }
  if (pauVar7 != (undefined1 (*) [16])&local_18) {
    do {
      *pauVar7 = (undefined1  [16])0x0;
      pauVar7 = pauVar7 + 1;
    } while (pauVar7 < (undefined1 (*) [16])&local_18);
  }
  return 1;
}

