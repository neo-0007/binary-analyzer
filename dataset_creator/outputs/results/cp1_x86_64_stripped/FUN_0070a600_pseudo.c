
/* WARNING: Removing unreachable block (ram,0x0070aa22) */
/* WARNING: Removing unreachable block (ram,0x0070aa2e) */
/* WARNING: Removing unreachable block (ram,0x0070aa67) */
/* WARNING: Removing unreachable block (ram,0x0070aa7f) */
/* WARNING: Removing unreachable block (ram,0x0070aa52) */
/* WARNING: Removing unreachable block (ram,0x0070aa5b) */
/* WARNING: Removing unreachable block (ram,0x0070a950) */
/* WARNING: Removing unreachable block (ram,0x0070a95c) */

undefined8 FUN_0070a600(uint *param_1,int param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  uVar5 = param_1[4];
  uVar3 = uVar5 & 0x7f;
  if (0x33 < uVar3) {
    if (uVar3 == 0x42) {
      if (param_1[2] != *(uint *)(in_FS_OFFSET + 0x2d0)) {
        return 1;
      }
      if ((*param_1 & 0x7ffff) == 0) {
        return 1;
      }
    }
    else if (uVar3 < 0x43) {
      if (uVar3 != 0x40) {
        if (uVar3 != 0x41) {
          return 0x16;
        }
        if (param_1[2] != *(uint *)(in_FS_OFFSET + 0x2d0)) {
          return 1;
        }
        puVar1 = param_1 + 1;
        *puVar1 = *puVar1 - 1;
        if (*puVar1 != 0) {
          return 0;
        }
      }
    }
    else if (uVar3 != 0x43) {
      return 0x16;
    }
    param_1[2] = 0;
    if (param_2 != 0) {
      param_1[3] = param_1[3] - 1;
    }
    uVar3 = *param_1;
    do {
      uVar4 = uVar3;
      LOCK();
      uVar3 = *param_1;
      bVar7 = uVar4 == uVar3;
      if (bVar7) {
        *param_1 = uVar4 & 0xfff80000;
        uVar3 = uVar4;
      }
      UNLOCK();
    } while (!bVar7);
    if ((uVar3 & 0x7fffe) != 0) {
      uVar5 = 1;
      syscall();
    }
    uVar6 = FUN_0070b800((int)uVar4 >> 0x13,0xffffffff,uVar5);
    return uVar6;
  }
  if ((uVar5 & 0x60) == 0) {
    uVar5 = 0;
    if (uVar3 == 0x11) {
      if (((*param_1 & 0x3fffffff) != *(uint *)(in_FS_OFFSET + 0x2d0)) || (param_1[2] != 0x7fffffff)
         ) {
        if (*(uint *)(in_FS_OFFSET + 0x2d0) != param_1[2]) {
          return 1;
        }
        puVar1 = param_1 + 1;
        *puVar1 = *puVar1 - 1;
        if (*puVar1 != 0) {
          return 0;
        }
        goto LAB_0070a807;
      }
      puVar1 = param_1 + 1;
      *puVar1 = *puVar1 - 1;
      if (*puVar1 != 0) {
        return 0x83;
      }
    }
    else {
      if (uVar3 < 0x12) {
        if (uVar3 != 0x10) {
          return 0x16;
        }
      }
      else if (1 < uVar3 - 0x12) {
        return 0x16;
      }
      if (((*param_1 & 0x3fffffff) != *(uint *)(in_FS_OFFSET + 0x2d0)) || (*param_1 == 0)) {
        return 1;
      }
      if (param_1[2] != 0x7fffffff) goto LAB_0070a807;
    }
    uVar5 = 0x7ffffffe;
LAB_0070a807:
    *(uint **)(in_FS_OFFSET + 0x2f0) = param_1 + 8;
    uVar2 = *(ulong *)(param_1 + 6);
    *(ulong *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) - 8) = uVar2;
    *(undefined8 *)(uVar2 & 0xfffffffffffffffe) = *(undefined8 *)(param_1 + 8);
    param_1[2] = uVar5;
    *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
    if (param_2 != 0) {
      param_1[3] = param_1[3] - 1;
    }
    LOCK();
    uVar5 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if ((int)uVar5 < 0) {
      syscall();
    }
    *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
    return 0;
  }
  if ((0xd000d00000000U >> ((ulong)uVar3 & 0x3f) & 1) == 0) {
    if (uVar3 != 0x31) {
      if (uVar3 != 0x21) {
        return 0x16;
      }
      if (param_1[2] != *(uint *)(in_FS_OFFSET + 0x2d0)) {
        return 1;
      }
      uVar5 = param_1[1] - 1;
      param_1[1] = uVar5;
      if (uVar5 != 0) {
        return 0;
      }
      goto LAB_0070a77c;
    }
    if (((*param_1 & 0x3fffffff) == *(uint *)(in_FS_OFFSET + 0x2d0)) && (param_1[2] == 0x7fffffff))
    {
      puVar1 = param_1 + 1;
      *puVar1 = *puVar1 - 1;
      if (*puVar1 != 0) {
        return 0x83;
      }
LAB_0070a9c2:
      uVar5 = 0x7ffffffe;
      goto LAB_0070a909;
    }
    if (param_1[2] != *(uint *)(in_FS_OFFSET + 0x2d0)) {
      return 1;
    }
    uVar5 = param_1[1];
    param_1[1] = uVar5 - 1;
    if (uVar5 - 1 != 0) {
      return 0;
    }
    uVar5 = 0;
  }
  else {
    if ((*param_1 & 0x3fffffff) != *(uint *)(in_FS_OFFSET + 0x2d0)) {
      return 1;
    }
    if (*param_1 == 0) {
      return 1;
    }
    uVar5 = param_1[4] & 0x10;
    if (uVar5 != 0) {
      if (param_1[2] == 0x7fffffff) goto LAB_0070a9c2;
      uVar5 = 0;
    }
LAB_0070a909:
    if ((param_1[4] & 0x10) == 0) goto LAB_0070a77c;
  }
  *(ulong *)(in_FS_OFFSET + 0x2f0) = (ulong)(param_1 + 8) | 1;
  uVar2 = *(ulong *)(param_1 + 6);
  *(ulong *)((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) - 8) = uVar2;
  *(undefined8 *)(uVar2 & 0xfffffffffffffffe) = *(undefined8 *)(param_1 + 8);
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
LAB_0070a77c:
  param_1[2] = uVar5;
  if (param_2 != 0) {
    param_1[3] = param_1[3] - 1;
  }
  uVar5 = *param_1;
  do {
    if (((int)uVar5 < 0) || (*(uint *)(in_FS_OFFSET + 0x2d0) != uVar5)) {
      syscall();
      break;
    }
    LOCK();
    uVar3 = *param_1;
    bVar7 = uVar5 == uVar3;
    if (bVar7) {
      *param_1 = 0;
      uVar3 = uVar5;
    }
    uVar5 = uVar3;
    UNLOCK();
  } while (!bVar7);
  *(undefined8 *)(in_FS_OFFSET + 0x2f0) = 0;
  return 0;
}

