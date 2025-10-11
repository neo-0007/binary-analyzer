
/* WARNING: Removing unreachable block (ram,0x0070b25f) */
/* WARNING: Removing unreachable block (ram,0x0070b2be) */
/* WARNING: Removing unreachable block (ram,0x0070b1cc) */
/* WARNING: Removing unreachable block (ram,0x0070b1d8) */
/* WARNING: Removing unreachable block (ram,0x0070b2ca) */
/* WARNING: Removing unreachable block (ram,0x0070b26b) */

undefined8 FUN_0070b100(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  if (param_1[6] == *(uint *)(in_FS_OFFSET + 0x2d0)) {
    param_1[6] = 0;
    LOCK();
    uVar1 = param_1[3];
    param_1[3] = 0;
    UNLOCK();
    if (param_1[0xc] == 0) {
LAB_0070b214:
      uVar3 = *param_1;
      do {
        LOCK();
        uVar2 = *param_1;
        bVar4 = uVar3 == uVar2;
        if (bVar4) {
          *param_1 = uVar3 >> 3 != 0 ^ uVar3 ^ 2;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar4);
      if (uVar3 >> 3 != 0) {
        LOCK();
        uVar3 = param_1[2];
        param_1[2] = 0;
        UNLOCK();
        if ((uVar3 & 2) != 0) {
          syscall();
        }
      }
    }
    else {
      uVar3 = param_1[1];
      do {
        if (uVar3 == 0) goto LAB_0070b214;
        LOCK();
        uVar2 = param_1[1];
        bVar4 = uVar3 == uVar2;
        if (bVar4) {
          param_1[1] = uVar3 | 0x80000000;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar4);
    }
    if ((uVar1 & 2) != 0) {
      syscall();
    }
  }
  else {
    uVar1 = *param_1;
    do {
      uVar3 = uVar1 - 8;
      if (uVar3 >> 3 == 0) {
        if ((uVar3 & 2) != 0) {
          uVar3 = uVar3 | 1;
        }
        uVar3 = uVar3 & 0xfffffffb;
      }
      LOCK();
      uVar2 = *param_1;
      bVar4 = uVar1 == uVar2;
      if (bVar4) {
        *param_1 = uVar3;
        uVar2 = uVar1;
      }
      UNLOCK();
      uVar1 = uVar2;
    } while (!bVar4);
    if ((uVar3 & 1) != 0) {
      LOCK();
      uVar1 = param_1[2];
      param_1[2] = 1;
      UNLOCK();
      if ((uVar1 & 2) != 0) {
        syscall();
      }
    }
    if (((uVar3 ^ uVar2) & 4) != 0) {
      syscall();
    }
  }
  return 0;
}

