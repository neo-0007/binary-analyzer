
long FUN_007a0e80(long param_1,uint param_2,uint *param_3,ulong *param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  uint *local_20;
  
  local_20 = (uint *)(param_1 + 4);
  param_3[0xc] = 0xffffffff;
  param_3[4] = 0x20;
  *(ushort *)(param_3 + 3) = (ushort)param_3[3] & 0xe207 | 0x400;
  uVar9 = *(uint *)(param_1 + 4);
  uVar2 = uVar9 - 0x30;
  if (uVar2 < 10) {
    uVar10 = *(int *)(param_1 + 8) - 0x30;
    lVar12 = param_1 + 8;
    if (uVar10 < 10) {
joined_r0x007a1199:
      lVar8 = lVar12;
      if (-1 < (int)uVar2) goto LAB_007a11a0;
      iVar3 = *(int *)(lVar8 + 4);
      while (iVar3 - 0x30U < 10) {
        iVar3 = *(int *)(lVar8 + 8);
        lVar8 = lVar8 + 4;
      }
LAB_007a11fd:
      if ((iVar3 == 0x24) && (uVar2 != 0)) {
        local_20 = (uint *)(lVar8 + 8);
        if (uVar2 == 0xffffffff) {
          uVar9 = *(uint *)(lVar8 + 8);
          goto LAB_007a0ecc;
        }
        goto LAB_007a1642;
      }
      goto LAB_007a0ecc;
    }
    if ((*(int *)(param_1 + 8) == 0x24) && (uVar2 != 0)) {
      local_20 = (uint *)(param_1 + 0xc);
LAB_007a1642:
      param_3[0xc] = uVar2 - 1;
      uVar11 = (ulong)uVar2;
      if ((ulong)uVar2 < *param_4) {
        uVar11 = *param_4;
      }
      uVar9 = *local_20;
      *param_4 = uVar11;
    }
  }
LAB_007a0ecc:
  bVar13 = false;
  puVar4 = local_20;
  do {
    switch(uVar9) {
    case 0x20:
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 0x10;
      break;
    default:
      if (!bVar13) goto LAB_007a0f05;
      goto LAB_007a0efd;
    case 0x23:
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 8;
      break;
    case 0x27:
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 0x80;
      break;
    case 0x2b:
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 0x40;
      break;
    case 0x2d:
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 0x20;
      break;
    case 0x30:
      param_3[4] = 0x30;
      break;
    case 0x49:
      *(byte *)((long)param_3 + 0xd) = *(byte *)((long)param_3 + 0xd) | 8;
    }
    uVar9 = puVar4[1];
    puVar4 = puVar4 + 1;
    bVar13 = true;
  } while (uVar9 != 0);
LAB_007a0efd:
  local_20 = puVar4;
LAB_007a0f05:
  if ((param_3[3] & 0x20) != 0) {
    param_3[4] = 0x20;
  }
  param_3[0xb] = 0xffffffff;
  param_3[1] = 0;
  if (*local_20 == 0x2a) {
    uVar2 = local_20[1] - 0x30;
    if (uVar2 < 10) {
      puVar4 = local_20 + 2;
      uVar9 = local_20[2] - 0x30;
      if (uVar9 < 10) {
        puVar4 = local_20 + 3;
        iVar3 = uVar2 * 10;
        puVar6 = puVar4;
        if (iVar3 <= (int)(0x7fffffff - uVar9)) {
          do {
            uVar10 = *puVar6;
            uVar2 = iVar3 + uVar9;
            uVar9 = uVar10 - 0x30;
            puVar4 = puVar6;
            if (9 < uVar9) goto LAB_007a1599;
            puVar4 = puVar6 + 1;
            if (0xccccccc < (int)uVar2) {
              if (9 < *puVar4 - 0x30) goto LAB_007a114f;
              puVar6 = puVar6 + 2;
              goto LAB_007a1543;
            }
            iVar3 = uVar2 * 10;
            puVar6 = puVar4;
          } while (iVar3 <= (int)(0x7fffffff - uVar9));
        }
        uVar10 = *puVar4;
        puVar6 = puVar4 + 1;
        if (uVar10 - 0x30 < 10) {
LAB_007a1543:
          uVar2 = *puVar6;
          while (uVar2 - 0x30 < 10) {
            puVar6 = puVar6 + 1;
            uVar2 = *puVar6;
          }
        }
        else {
          uVar2 = 0xffffffff;
LAB_007a1599:
          if (((uVar10 == 0x24) && (uVar2 != 0)) && (uVar2 != 0xffffffff)) goto LAB_007a15b6;
        }
      }
      else if ((uVar2 != 0) && (local_20[2] == 0x24)) {
LAB_007a15b6:
        uVar11 = *param_4;
        param_3[0xb] = uVar2 - 1;
        uVar7 = (ulong)uVar2;
        if (uVar2 < uVar11) {
          uVar7 = uVar11;
        }
        *param_4 = uVar7;
        if (-1 < (int)(uVar2 - 1)) {
          lVar8 = 1;
          lVar12 = 0;
          local_20 = puVar4 + 1;
          goto LAB_007a0f3f;
        }
      }
    }
LAB_007a114f:
    param_3[0xb] = param_2;
    param_2 = param_2 + 1;
    lVar8 = 2;
    lVar12 = 1;
    local_20 = local_20 + 1;
  }
  else {
    uVar2 = *local_20 - 0x30;
    lVar8 = 1;
    lVar12 = 0;
    if (uVar2 < 10) {
      puVar4 = local_20 + 1;
      uVar9 = local_20[1] - 0x30;
      if (uVar9 < 10) {
        puVar4 = local_20 + 2;
        iVar3 = uVar2 * 10;
        puVar6 = puVar4;
        if (iVar3 <= (int)(0x7fffffff - uVar9)) {
          do {
            uVar2 = iVar3 + uVar9;
            uVar9 = *puVar6 - 0x30;
            puVar4 = puVar6;
            if (9 < uVar9) goto LAB_007a1494;
            puVar4 = puVar6 + 1;
            if (0xccccccc < (int)uVar2) {
              if (9 < *puVar4 - 0x30) goto LAB_007a10f4;
              puVar6 = puVar6 + 2;
              goto LAB_007a10d2;
            }
            iVar3 = uVar2 * 10;
            puVar6 = puVar4;
          } while (iVar3 <= (int)(0x7fffffff - uVar9));
        }
        puVar6 = puVar4 + 1;
        if (*puVar4 - 0x30 < 10) {
LAB_007a10d2:
          uVar2 = *puVar6;
          puVar4 = puVar6;
          while (uVar2 - 0x30 < 10) {
            puVar4 = puVar4 + 1;
            uVar2 = *puVar4;
          }
LAB_007a10f4:
          lVar8 = 1;
          lVar12 = 0;
          local_20 = puVar4;
        }
        else {
          uVar2 = 0xffffffff;
LAB_007a1494:
          if (uVar2 != 0xffffffff) goto LAB_007a14a2;
          lVar8 = 1;
          lVar12 = 0;
          local_20 = puVar4;
        }
      }
      else {
LAB_007a14a2:
        param_3[1] = uVar2;
        lVar8 = 1;
        lVar12 = 0;
        local_20 = puVar4;
      }
    }
  }
LAB_007a0f3f:
  param_3[10] = 0xffffffff;
  *param_3 = 0xffffffff;
  puVar4 = local_20;
  if (*local_20 == 0x2e) {
    if (local_20[1] == 0x2a) {
      uVar2 = local_20[2] - 0x30;
      if (uVar2 < 10) {
        puVar4 = local_20 + 3;
        uVar9 = local_20[3] - 0x30;
        if (uVar9 < 10) {
          puVar6 = local_20 + 4;
          do {
            puVar4 = puVar6;
            if ((int)(0x7fffffff - uVar9) < (int)(uVar2 * 10)) {
              uVar10 = *puVar4;
              puVar6 = puVar4 + 1;
              if (uVar10 - 0x30 < 10) goto LAB_007a1714;
              uVar2 = 0xffffffff;
LAB_007a1757:
              if (((uVar10 != 0x24) || (uVar2 == 0)) || (uVar2 == 0xffffffff)) goto LAB_007a14c7;
              goto LAB_007a1774;
            }
            uVar10 = *puVar4;
            uVar2 = uVar2 * 10 + uVar9;
            uVar9 = uVar10 - 0x30;
            if (9 < uVar9) goto LAB_007a1757;
            puVar6 = puVar4 + 1;
          } while ((int)uVar2 < 0xccccccd);
          if (puVar4[1] - 0x30 < 10) {
            puVar6 = puVar4 + 2;
LAB_007a1714:
            uVar2 = *puVar6;
            while (uVar2 - 0x30 < 10) {
              puVar6 = puVar6 + 1;
              uVar2 = *puVar6;
            }
          }
        }
        else if ((local_20[3] == 0x24) && (uVar2 != 0)) {
LAB_007a1774:
          uVar11 = *param_4;
          param_3[10] = uVar2 - 1;
          uVar7 = (ulong)uVar2;
          if (uVar2 < uVar11) {
            uVar7 = uVar11;
          }
          *param_4 = uVar7;
          puVar4 = puVar4 + 1;
          if (-1 < (int)(uVar2 - 1)) goto LAB_007a0f55;
        }
      }
LAB_007a14c7:
      param_3[10] = param_2;
      param_2 = param_2 + 1;
      lVar12 = lVar8;
      puVar4 = local_20 + 2;
    }
    else {
      uVar2 = local_20[1] - 0x30;
      if (uVar2 < 10) {
        uVar9 = local_20[2] - 0x30;
        if (uVar9 < 10) {
          puVar4 = local_20 + 3;
          do {
            puVar6 = puVar4;
            if ((int)(0x7fffffff - uVar9) < (int)(uVar2 * 10)) {
              puVar4 = puVar6 + 1;
              if (*puVar6 - 0x30 < 10) goto LAB_007a1362;
              uVar2 = 0xffffffff;
LAB_007a161a:
              puVar4 = puVar6;
              if (uVar2 != 0xffffffff) {
                *param_3 = uVar2;
              }
              goto LAB_007a0f55;
            }
            uVar2 = uVar2 * 10 + uVar9;
            uVar9 = *puVar6 - 0x30;
            if (9 < uVar9) goto LAB_007a161a;
            puVar4 = puVar6 + 1;
          } while ((int)uVar2 < 0xccccccd);
          if (*puVar4 - 0x30 < 10) {
            puVar4 = puVar6 + 2;
LAB_007a1362:
            uVar2 = *puVar4;
            while (uVar2 - 0x30 < 10) {
              puVar4 = puVar4 + 1;
              uVar2 = *puVar4;
            }
          }
        }
        else {
          *param_3 = uVar2;
          puVar4 = local_20 + 2;
        }
      }
      else {
        *param_3 = 0;
        puVar4 = local_20 + 1;
      }
    }
  }
LAB_007a0f55:
  local_20 = puVar4;
  lVar8 = DAT_0094b488;
  param_3[3] = param_3[3] & 0xfdf8;
  if (lVar8 == 0) {
LAB_007a0f6c:
    uVar2 = *local_20;
LAB_007a0f6e:
    puVar4 = local_20 + 1;
    puVar6 = puVar4;
    switch(uVar2) {
    case 0x4c:
    case 0x71:
switchD_007a0f8d_caseD_4c:
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 1;
      puVar4 = puVar6 + 1;
      uVar2 = *puVar6;
      break;
    case 0x5a:
    case 0x6a:
    case 0x74:
    case 0x7a:
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 4;
      uVar2 = local_20[1];
      puVar4 = local_20 + 2;
      break;
    case 0x68:
      if (local_20[1] == 0x68) {
        *(byte *)((long)param_3 + 0xd) = *(byte *)((long)param_3 + 0xd) | 2;
        puVar4 = local_20 + 3;
        uVar2 = local_20[2];
      }
      else {
        *(byte *)(param_3 + 3) = (byte)param_3[3] | 2;
        puVar4 = local_20 + 2;
        uVar2 = local_20[1];
      }
      break;
    case 0x6c:
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 4;
      uVar2 = local_20[1];
      puVar4 = local_20 + 2;
      puVar6 = puVar4;
      if (uVar2 == 0x6c) goto switchD_007a0f8d_caseD_4c;
    }
  }
  else {
    uVar2 = *local_20;
    if (*(long *)(lVar8 + (ulong)uVar2 * 8) == 0) goto LAB_007a0f6e;
    iVar3 = FUN_007bfdd0(&local_20,param_3);
    if (iVar3 != 0) goto LAB_007a0f6c;
    uVar2 = *local_20;
    puVar4 = local_20 + 1;
  }
  bVar13 = DAT_0094b478 != 0;
  param_3[2] = uVar2;
  param_3[0x10] = 0xffffffff;
  local_20 = puVar4;
  if (((bVar13) && ((int)uVar2 < 0x100)) &&
     (pcVar1 = *(code **)(DAT_0094b5d8 + (long)(int)uVar2 * 8), pcVar1 != (code *)0x0)) {
    iVar3 = (*pcVar1)(param_3,1,param_3 + 0xd,param_3 + 0x10);
    lVar8 = (long)iVar3;
    uVar2 = param_3[2];
    *(long *)(param_3 + 0xe) = lVar8;
    if (iVar3 < 0) goto LAB_007a0fbf;
    if ((param_3[0xc] != 0xffffffff) || (lVar8 == 0)) goto LAB_007a1240;
    goto LAB_007a1291;
  }
LAB_007a0fbf:
  param_3[0xe] = 1;
  param_3[0xf] = 0;
  switch(uVar2) {
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    uVar9 = (-(uint)((param_3[3] & 1) == 0) & 0xffffff00) + 0x107;
    goto LAB_007a1284;
  case 0x42:
  case 0x58:
  case 0x62:
  case 100:
  case 0x69:
  case 0x6f:
  case 0x75:
  case 0x78:
    uVar9 = 0x200;
    if (((param_3[3] & 4) == 0) && (uVar9 = 0x400, (param_3[3] & 2) == 0)) {
      uVar9 = *(byte *)((long)param_3 + 0xd) >> 1 & 1;
    }
    goto LAB_007a1284;
  case 0x43:
    uVar9 = 2;
    break;
  default:
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    goto LAB_007a1240;
  case 0x53:
    uVar9 = 4;
    break;
  case 99:
    uVar9 = 1;
LAB_007a1284:
    param_3[0xd] = uVar9;
    if (param_3[0xc] == 0xffffffff) goto LAB_007a128c;
    goto LAB_007a1240;
  case 0x6e:
    uVar9 = 0x800;
    break;
  case 0x70:
    uVar9 = 5;
    break;
  case 0x73:
    uVar9 = 3;
  }
  param_3[0xd] = uVar9;
  if (param_3[0xc] == 0xffffffff) {
LAB_007a128c:
    lVar8 = 1;
LAB_007a1291:
    param_3[0xc] = param_2;
    lVar12 = lVar12 + lVar8;
LAB_007a1240:
    if (uVar2 == 0) {
      *(uint **)(param_3 + 6) = local_20 + -1;
      *(uint **)(param_3 + 8) = local_20 + -1;
      return lVar12;
    }
  }
  *(uint **)(param_3 + 6) = local_20;
  uVar5 = FUN_007a97c0(local_20,0x25);
  *(undefined8 *)(param_3 + 8) = uVar5;
  return lVar12;
LAB_007a11a0:
  if ((int)uVar2 < 0xccccccd) {
    iVar3 = uVar2 * 10;
    uVar2 = uVar10 + iVar3;
    if ((int)(0x7fffffff - uVar10) < iVar3) {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  iVar3 = *(int *)(lVar8 + 4);
  uVar10 = iVar3 - 0x30;
  lVar12 = lVar8 + 4;
  if (9 < uVar10) goto LAB_007a11fd;
  goto joined_r0x007a1199;
}

