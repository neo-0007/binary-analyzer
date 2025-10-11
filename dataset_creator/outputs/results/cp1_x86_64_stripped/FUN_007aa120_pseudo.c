
undefined8 FUN_007aa120(long param_1,long param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  
  lVar10 = param_1 / 0x15180;
  uVar3 = param_1 % 0x15180 + param_2;
  if ((long)uVar3 < 0) {
    do {
      lVar10 = lVar10 + -1;
      uVar3 = uVar3 + 0x15180;
    } while ((long)uVar3 < 0);
  }
  else {
    for (; 0x1517f < (long)uVar3; uVar3 = uVar3 - 0x15180) {
      lVar10 = lVar10 + 1;
    }
  }
  *(int *)(param_3 + 1) = (int)(uVar3 / 0xe10);
  uVar6 = (uVar3 % 0xe10) / 0x3c;
  iVar2 = (int)uVar6;
  *param_3 = CONCAT44(iVar2,(int)(uVar3 % 0xe10) + ((int)(uVar6 << 4) - iVar2) * -4);
  lVar4 = (lVar10 + 4) % 7;
  iVar2 = (int)lVar4;
  if (lVar4 < 0) {
    iVar2 = iVar2 + 7;
  }
  *(int *)(param_3 + 3) = iVar2;
  uVar3 = 0x7b2;
  do {
    if (-1 < lVar10) {
      lVar4 = 0x16d;
      if ((uVar3 & 3) == 0) {
        lVar4 = 0x16e;
        lVar8 = uVar3 * -0x70a3d70a3d70a3d7;
        if ((lVar8 + 0x51eb851eb851eb8U >> 2 | lVar8 << 0x3e) < 0x28f5c28f5c28f5d) {
          lVar4 = (ulong)((lVar8 + 0x51eb851eb851eb0U >> 4 | lVar8 << 0x3c) < 0xa3d70a3d70a3d7) +
                  0x16d;
        }
      }
      if (lVar10 < lVar4) break;
    }
    uVar6 = lVar10 / 0x16d + uVar3 + (lVar10 % 0x16d >> 0x3f);
    lVar8 = uVar6 - 1;
    lVar4 = uVar6 + 2;
    if (-1 < lVar8) {
      lVar4 = lVar8;
    }
    lVar5 = uVar3 - 1;
    lVar7 = uVar3 + 2;
    if (-1 < lVar5) {
      lVar7 = lVar5;
    }
    lVar10 = lVar10 - (((((lVar4 >> 2) + (lVar8 % 4 >> 0x3f)) -
                        (lVar8 / 100 + (lVar8 % 100 >> 0x3f))) + lVar8 / 400 + (lVar8 % 400 >> 0x3f)
                       + (uVar6 - uVar3) * 0x16d) -
                      ((((lVar7 >> 2) + (lVar5 % 4 >> 0x3f)) - (lVar5 / 100 + (lVar5 % 100 >> 0x3f))
                       ) + lVar5 / 400 + (lVar5 % 400 >> 0x3f)));
    uVar3 = uVar6;
  } while( true );
  iVar2 = (int)uVar3 + -0x76c;
  *(int *)((long)param_3 + 0x14) = iVar2;
  if ((long)iVar2 != uVar3 - 0x76c) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
    return 0;
  }
  *(int *)((long)param_3 + 0x1c) = (int)lVar10;
  puVar9 = &DAT_00840b00;
  if ((uVar3 & 3) == 0) {
    puVar9 = &UNK_00840b1a;
    lVar4 = uVar3 * -0x70a3d70a3d70a3d7;
    if ((lVar4 + 0x51eb851eb851eb8U >> 2 | lVar4 << 0x3e) < 0x28f5c28f5c28f5d) {
      if (0xa3d70a3d70a3d6 < (lVar4 + 0x51eb851eb851eb0U >> 4 | lVar4 << 0x3c)) {
        puVar9 = &DAT_00840b00;
      }
      uVar1 = *(ushort *)(puVar9 + 0x16);
      goto joined_r0x007aa4b6;
    }
  }
  uVar1 = *(ushort *)(puVar9 + 0x16);
joined_r0x007aa4b6:
  lVar4 = 0xb;
  if (lVar10 < (long)(ulong)uVar1) {
    lVar4 = 0xb;
    do {
      lVar4 = lVar4 + -1;
      uVar1 = *(ushort *)(puVar9 + lVar4 * 2);
    } while (lVar10 < (long)(ulong)uVar1);
  }
  *(ulong *)((long)param_3 + 0xc) = CONCAT44((int)lVar4,((int)lVar10 - (uint)uVar1) + 1);
  return 1;
}

