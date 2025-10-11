
/* WARNING: Removing unreachable block (ram,0x0070b042) */
/* WARNING: Removing unreachable block (ram,0x0070b04e) */
/* WARNING: Type propagation algorithm not settling */

int FUN_0070af10(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  if (param_1[6] == *(uint *)(in_FS_OFFSET + 0x2d0)) {
    return 0x23;
  }
  if (param_1[0xc] == 2) {
    uVar2 = *param_1;
    while (((uVar2 & 3) == 2 && (uVar2 >> 3 != 0))) {
      LOCK();
      uVar3 = *param_1;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *param_1 = uVar2 | 4;
        uVar3 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar3;
      if (bVar5) {
        while (uVar2 = *param_1, (uVar2 & 4) != 0) {
          iVar4 = FUN_007a2a30(param_1,uVar2,0,0,(ulong)(param_1[7] != 0) << 7);
          if (iVar4 == 0x6e) {
            return 0x6e;
          }
          if (iVar4 == 0x4b) {
            return 0x4b;
          }
        }
      }
    }
  }
  LOCK();
  uVar2 = *param_1;
  *param_1 = *param_1 + 8;
  UNLOCK();
  uVar2 = uVar2 + 8;
  while ((int)uVar2 < 0) {
    LOCK();
    uVar3 = *param_1;
    bVar5 = uVar2 == uVar3;
    if (bVar5) {
      *param_1 = uVar2 - 8;
      uVar3 = uVar2;
    }
    uVar2 = uVar3;
    UNLOCK();
    if (bVar5) {
      return 0xb;
    }
  }
  if ((uVar2 & 1) != 0) {
    do {
      if ((uVar2 & 3) != 1) {
        puVar1 = param_1 + 2;
        bVar5 = false;
        goto LAB_0070b067;
      }
      LOCK();
      uVar3 = *param_1;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *param_1 = uVar2 ^ 1;
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
      UNLOCK();
    } while (!bVar5);
    LOCK();
    uVar2 = param_1[2];
    param_1[2] = 0;
    UNLOCK();
    if ((uVar2 & 2) != 0) {
      syscall();
    }
  }
  return 0;
LAB_0070b067:
  uVar2 = *puVar1;
  if ((uVar2 | 2) != 3) {
    if (bVar5) {
      return 0;
    }
    if ((*param_1 & 1) != 0) goto LAB_0070b067;
    uVar2 = *puVar1;
    if ((uVar2 | 2) != 3) {
      return 0;
    }
    bVar5 = true;
  }
  if ((uVar2 & 2) == 0) {
    LOCK();
    uVar3 = *puVar1;
    if (uVar2 == uVar3) {
      *puVar1 = 3;
    }
    UNLOCK();
    if (uVar2 != uVar3) goto LAB_0070b067;
  }
  iVar4 = FUN_007a2a30(puVar1,3,0,0);
  if ((iVar4 == 0x6e) || (iVar4 == 0x4b)) {
    uVar2 = *param_1;
    do {
      if ((uVar2 & 1) == 0) {
        do {
        } while ((*puVar1 | 2) == 3);
        return 0;
      }
      LOCK();
      uVar3 = *param_1;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *param_1 = uVar2 - 8;
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
      UNLOCK();
    } while (!bVar5);
    return iVar4;
  }
  goto LAB_0070b067;
}

