
/* WARNING: Removing unreachable block (ram,0x0070b5e3) */
/* WARNING: Removing unreachable block (ram,0x0070b5a0) */
/* WARNING: Removing unreachable block (ram,0x0070b57e) */
/* WARNING: Removing unreachable block (ram,0x0070b598) */
/* WARNING: Removing unreachable block (ram,0x0070b586) */
/* WARNING: Removing unreachable block (ram,0x0070b5eb) */

int FUN_0070b2d0(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  bool bVar8;
  
  if (param_1[6] == *(uint *)(in_FS_OFFSET + 0x2d0)) {
    return 0x23;
  }
  uVar4 = *param_1;
  do {
    uVar6 = uVar4;
    LOCK();
    uVar4 = *param_1;
    bVar7 = uVar6 == uVar4;
    if (bVar7) {
      *param_1 = uVar6 | 2;
      uVar4 = uVar6;
    }
    UNLOCK();
  } while (!bVar7);
  puVar1 = param_1 + 3;
  uVar4 = 1;
  if ((uVar6 & 2) != 0) {
    uVar4 = param_1[0xc];
    if (uVar4 != 0) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
    }
    bVar7 = false;
LAB_0070b36f:
    if ((uVar6 & 2) == 0) goto code_r0x0070b374;
    if (uVar4 != 0) {
      uVar3 = param_1[1];
      if ((int)uVar3 < 0) {
        LOCK();
        bVar8 = uVar3 == param_1[1];
        if (bVar8) {
          param_1[1] = uVar3 + 0x7fffffff;
        }
        UNLOCK();
        if (bVar8) {
          uVar6 = *param_1;
          goto LAB_0070b38c;
        }
        goto LAB_0070b36f;
      }
    }
    uVar6 = *puVar1;
    if ((uVar6 & 0xfffffffd) == 1) {
      if (uVar6 != 3) {
        LOCK();
        uVar3 = *puVar1;
        if (uVar6 == uVar3) {
          *puVar1 = 3;
        }
        UNLOCK();
        if (uVar6 != uVar3) goto LAB_0070b440;
      }
      iVar5 = FUN_007a2a30(puVar1,3,0,0,(ulong)(param_1[7] != 0) << 7);
      if ((iVar5 == 0x6e) || (iVar5 == 0x4b)) {
        if (uVar4 == 0) {
          return iVar5;
        }
        uVar4 = param_1[1];
        do {
          if (uVar4 == 0x80000001) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar4 - 1;
          }
          LOCK();
          uVar3 = param_1[1];
          bVar7 = uVar4 == uVar3;
          if (bVar7) {
            param_1[1] = uVar6;
            uVar3 = uVar4;
          }
          uVar4 = uVar3;
          UNLOCK();
        } while (!bVar7);
        if (uVar4 != 0x80000001) {
          return iVar5;
        }
        uVar4 = 3;
        uVar6 = *param_1 | 2;
        goto LAB_0070b30c;
      }
      uVar6 = *param_1;
      bVar7 = true;
    }
    else {
LAB_0070b440:
      uVar6 = *param_1;
    }
    goto LAB_0070b36f;
  }
LAB_0070b30c:
  param_1[3] = uVar4;
  if ((uVar6 & 1) == 0) {
    do {
      if (uVar6 >> 3 != 0) break;
      LOCK();
      uVar4 = *param_1;
      bVar7 = uVar6 == uVar4;
      if (bVar7) {
        *param_1 = uVar6 | 1;
        uVar4 = uVar6;
      }
      UNLOCK();
      if (bVar7) {
        param_1[2] = 1;
        goto LAB_0070b339;
      }
      uVar6 = uVar4;
    } while ((uVar4 & 1) == 0);
    puVar2 = param_1 + 2;
    bVar7 = false;
LAB_0070b460:
    do {
      uVar4 = *puVar2;
      if ((uVar4 & 0xfffffffd) != 0) {
        if (bVar7) break;
        if ((*param_1 & 1) == 0) goto LAB_0070b460;
        uVar4 = *puVar2;
        if ((uVar4 & 0xfffffffd) != 0) break;
        bVar7 = true;
      }
      if ((uVar4 & 2) == 0) {
        LOCK();
        uVar6 = *puVar2;
        if (uVar4 == uVar6) {
          *puVar2 = 2;
        }
        UNLOCK();
        if (uVar4 != uVar6) goto LAB_0070b460;
      }
      iVar5 = FUN_007a2a30(puVar2,2,0,0,(ulong)(param_1[7] != 0) << 7);
      if ((iVar5 == 0x6e) || (iVar5 == 0x4b)) goto LAB_0070b4d2;
    } while( true );
  }
LAB_0070b339:
  param_1[6] = *(uint *)(in_FS_OFFSET + 0x2d0);
  return 0;
code_r0x0070b374:
  LOCK();
  uVar3 = *param_1;
  bVar8 = uVar6 == uVar3;
  if (bVar8) {
    *param_1 = uVar6 | 2;
    uVar3 = uVar6;
  }
  uVar6 = uVar3;
  UNLOCK();
  if (bVar8) goto code_r0x0070b383;
  goto LAB_0070b36f;
code_r0x0070b383:
  if (uVar4 != 0) {
    LOCK();
    param_1[1] = param_1[1] - 1;
    UNLOCK();
  }
LAB_0070b38c:
  uVar6 = uVar6 | 2;
  uVar4 = (-(uint)!bVar7 & 0xfffffffe) + 3;
  goto LAB_0070b30c;
LAB_0070b4d2:
  if (param_1[0xc] != 0) {
    uVar4 = param_1[1];
    if (uVar4 != 0) {
      LOCK();
      uVar6 = *puVar1;
      *puVar1 = 0;
      UNLOCK();
      do {
        LOCK();
        uVar3 = param_1[1];
        bVar7 = uVar4 == uVar3;
        if (bVar7) {
          param_1[1] = uVar4 | 0x80000000;
          uVar3 = uVar4;
        }
        uVar4 = uVar3;
        UNLOCK();
        if (bVar7) {
          if ((uVar6 & 2) == 0) {
            return iVar5;
          }
          syscall();
          return iVar5;
        }
      } while (uVar4 != 0);
      param_1[3] = uVar6;
    }
  }
  uVar4 = *param_1;
  if ((uVar4 & 1) == 0) {
    LOCK();
    uVar6 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
    do {
      LOCK();
      uVar3 = *param_1;
      bVar7 = uVar4 == uVar3;
      if (bVar7) {
        *param_1 = (uVar4 ^ 2) & 0xfffffffb;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
      UNLOCK();
      if (bVar7) {
        if ((uVar6 & 2) != 0) {
          syscall();
        }
        if ((uVar4 & 4) != 0) {
          syscall();
        }
        return 0x6e;
      }
    } while ((uVar4 & 1) == 0);
    param_1[3] = uVar6;
  }
  do {
  } while ((*puVar2 & 0xfffffffd) == 0);
  goto LAB_0070b339;
}

