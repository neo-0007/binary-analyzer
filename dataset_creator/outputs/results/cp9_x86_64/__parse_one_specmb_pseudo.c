
long __parse_one_specmb(long param_1,uint param_2,uint *param_3,ulong *param_4)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  bool bVar13;
  byte *local_30 [2];
  
  local_30[0] = (byte *)(param_1 + 1);
  param_3[0xc] = 0xffffffff;
  *(ushort *)(param_3 + 3) = (ushort)param_3[3] & 0xe207;
  param_3[4] = 0x20;
  bVar11 = *(byte *)(param_1 + 1);
  uVar10 = (ulong)(bVar11 - 0x30);
  if (bVar11 - 0x30 < 10) {
    pbVar7 = (byte *)(param_1 + 2);
    bVar11 = *(byte *)(param_1 + 2);
    uVar5 = bVar11 - 0x30;
    if (uVar5 < 10) {
      pbVar7 = (byte *)(param_1 + 3);
      while (iVar2 = (int)uVar10, -1 < iVar2) {
        if (iVar2 < 0xccccccd) {
          uVar8 = uVar5 + iVar2 * 10;
          if ((int)(0x7fffffff - uVar5) < iVar2 * 10) {
            uVar8 = 0xffffffff;
          }
          uVar10 = (ulong)uVar8;
        }
        else {
          uVar10 = 0xffffffff;
        }
        bVar11 = *pbVar7;
        uVar5 = bVar11 - 0x30;
        if (9 < uVar5) goto LAB_00797030;
        pbVar7 = pbVar7 + 1;
      }
      for (; bVar11 = *pbVar7, bVar11 - 0x30 < 10; pbVar7 = pbVar7 + 1) {
      }
    }
LAB_00797030:
    iVar2 = (int)uVar10;
    if ((iVar2 == 0) || (bVar11 != 0x24)) {
      bVar11 = *(byte *)(param_1 + 1);
    }
    else {
      local_30[0] = pbVar7 + 1;
      if (iVar2 != -1) {
        param_3[0xc] = iVar2 - 1;
        if (uVar10 < *param_4) {
          uVar10 = *param_4;
        }
        *param_4 = uVar10;
      }
      bVar11 = pbVar7[1];
    }
  }
  do {
    switch(bVar11) {
    case 0x20:
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 0x10;
      break;
    default:
      goto switchD_00796cea_caseD_21;
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
    local_30[0] = local_30[0] + 1;
    bVar11 = *local_30[0];
  } while (bVar11 != 0);
switchD_00796cea_caseD_21:
  if ((param_3[3] & 0x20) != 0) {
    param_3[4] = 0x20;
  }
  param_3[0xb] = 0xffffffff;
  param_3[1] = 0;
  if (*local_30[0] == 0x2a) {
    pbVar7 = local_30[0] + 1;
    uVar5 = local_30[0][1] - 0x30;
    if (uVar5 < 10) {
      pbVar4 = local_30[0] + 2;
      bVar11 = local_30[0][2];
      uVar8 = bVar11 - 0x30;
      if (uVar8 < 10) {
        pbVar4 = local_30[0] + 3;
        while (-1 < (int)uVar5) {
          if ((int)uVar5 < 0xccccccd) {
            iVar2 = uVar5 * 10;
            uVar5 = uVar8 + iVar2;
            if ((int)(0x7fffffff - uVar8) < iVar2) {
              uVar5 = 0xffffffff;
            }
          }
          else {
            uVar5 = 0xffffffff;
          }
          bVar11 = *pbVar4;
          uVar8 = bVar11 - 0x30;
          if (9 < uVar8) goto LAB_007972ef;
          pbVar4 = pbVar4 + 1;
        }
        bVar11 = *pbVar4;
        while (bVar11 - 0x30 < 10) {
          pbVar4 = pbVar4 + 1;
          bVar11 = *pbVar4;
        }
      }
LAB_007972ef:
      if (((uVar5 != 0) && (bVar11 == 0x24)) && (uVar5 != 0xffffffff)) {
        uVar10 = *param_4;
        param_3[0xb] = uVar5 - 1;
        uVar6 = (ulong)uVar5;
        if (uVar5 < uVar10) {
          uVar6 = uVar10;
        }
        local_30[0] = pbVar4 + 1;
        *param_4 = uVar6;
        if (-1 < (int)(uVar5 - 1)) goto LAB_00797330;
      }
    }
    param_3[0xb] = param_2;
    param_2 = param_2 + 1;
    lVar9 = 2;
    lVar12 = 1;
    local_30[0] = pbVar7;
  }
  else {
    uVar5 = *local_30[0] - 0x30;
    lVar9 = 1;
    lVar12 = 0;
    if (uVar5 < 10) {
      uVar8 = local_30[0][1] - 0x30;
      pbVar7 = local_30[0] + 1;
      if (uVar8 < 10) {
        pbVar7 = local_30[0] + 2;
        while (-1 < (int)uVar5) {
          if ((int)uVar5 < 0xccccccd) {
            iVar2 = uVar5 * 10;
            uVar5 = uVar8 + iVar2;
            if ((int)(0x7fffffff - uVar8) < iVar2) {
              uVar5 = 0xffffffff;
            }
          }
          else {
            uVar5 = 0xffffffff;
          }
          uVar8 = *pbVar7 - 0x30;
          if (9 < uVar8) goto LAB_00796ef9;
          pbVar7 = pbVar7 + 1;
        }
        bVar11 = *pbVar7;
        while (bVar11 - 0x30 < 10) {
          pbVar7 = pbVar7 + 1;
          bVar11 = *pbVar7;
        }
      }
LAB_00796ef9:
      local_30[0] = pbVar7;
      if (uVar5 == 0xffffffff) {
LAB_00797330:
        lVar9 = 1;
        lVar12 = 0;
      }
      else {
        param_3[1] = uVar5;
        lVar9 = 1;
        lVar12 = 0;
      }
    }
  }
  param_3[10] = 0xffffffff;
  *param_3 = 0xffffffff;
  if (*local_30[0] == 0x2e) {
    if (local_30[0][1] == 0x2a) {
      pbVar7 = local_30[0] + 2;
      uVar5 = local_30[0][2] - 0x30;
      if (uVar5 < 10) {
        pbVar4 = local_30[0] + 3;
        bVar11 = local_30[0][3];
        uVar8 = bVar11 - 0x30;
        if (uVar8 < 10) {
          pbVar4 = local_30[0] + 4;
          while (-1 < (int)uVar5) {
            if ((int)uVar5 < 0xccccccd) {
              iVar2 = uVar5 * 10;
              uVar5 = uVar8 + iVar2;
              if ((int)(0x7fffffff - uVar8) < iVar2) {
                uVar5 = 0xffffffff;
              }
            }
            else {
              uVar5 = 0xffffffff;
            }
            bVar11 = *pbVar4;
            uVar8 = bVar11 - 0x30;
            if (9 < uVar8) goto LAB_007974f0;
            pbVar4 = pbVar4 + 1;
          }
          for (; bVar11 = *pbVar4, bVar11 - 0x30 < 10; pbVar4 = pbVar4 + 1) {
          }
        }
LAB_007974f0:
        if (((uVar5 != 0) && (bVar11 == 0x24)) && (uVar5 != 0xffffffff)) {
          uVar10 = *param_4;
          param_3[10] = uVar5 - 1;
          uVar6 = (ulong)uVar5;
          if (uVar5 < uVar10) {
            uVar6 = uVar10;
          }
          local_30[0] = pbVar4 + 1;
          *param_4 = uVar6;
          if (-1 < (int)(uVar5 - 1)) goto LAB_00796d61;
        }
      }
      param_3[10] = param_2;
      param_2 = param_2 + 1;
      lVar12 = lVar9;
      local_30[0] = pbVar7;
    }
    else {
      uVar5 = local_30[0][1] - 0x30;
      if (uVar5 < 10) {
        uVar8 = local_30[0][2] - 0x30;
        pbVar7 = local_30[0] + 2;
        if (uVar8 < 10) {
          pbVar7 = local_30[0] + 3;
          while (-1 < (int)uVar5) {
            if ((int)uVar5 < 0xccccccd) {
              iVar2 = uVar5 * 10;
              uVar5 = uVar8 + iVar2;
              if ((int)(0x7fffffff - uVar8) < iVar2) {
                uVar5 = 0xffffffff;
              }
            }
            else {
              uVar5 = 0xffffffff;
            }
            uVar8 = *pbVar7 - 0x30;
            if (9 < uVar8) goto LAB_007971b0;
            pbVar7 = pbVar7 + 1;
          }
          bVar11 = *pbVar7;
          while (bVar11 - 0x30 < 10) {
            pbVar7 = pbVar7 + 1;
            bVar11 = *pbVar7;
          }
        }
LAB_007971b0:
        local_30[0] = pbVar7;
        if (uVar5 != 0xffffffff) {
          *param_3 = uVar5;
        }
      }
      else {
        *param_3 = 0;
        local_30[0] = local_30[0] + 1;
      }
    }
  }
LAB_00796d61:
  lVar9 = __printf_modifier_table;
  param_3[3] = param_3[3] & 0xfdf8;
  pbVar7 = local_30[0];
  if (((lVar9 != 0) && (*(long *)(lVar9 + (ulong)*local_30[0] * 8) != 0)) &&
     (iVar2 = __handle_registered_modifier_mb(local_30,param_3), pbVar7 = local_30[0], iVar2 == 0))
  goto LAB_007971c7;
  local_30[0] = pbVar7 + 1;
  pbVar4 = local_30[0];
  switch(*pbVar7) {
  case 0x4c:
  case 0x71:
    goto LAB_007971c3;
  case 0x5a:
  case 0x6a:
  case 0x74:
  case 0x7a:
    *(byte *)(param_3 + 3) = (byte)param_3[3] | 4;
LAB_00796da4:
    pbVar4 = pbVar7 + 2;
    pbVar7 = local_30[0];
    break;
  case 0x68:
    if (pbVar7[1] == 0x68) {
      pbVar4 = pbVar7 + 3;
      *(byte *)((long)param_3 + 0xd) = *(byte *)((long)param_3 + 0xd) | 2;
      pbVar7 = pbVar7 + 2;
    }
    else {
      pbVar4 = pbVar7 + 2;
      *(byte *)(param_3 + 3) = (byte)param_3[3] | 2;
      pbVar7 = local_30[0];
    }
    break;
  case 0x6c:
    *(byte *)(param_3 + 3) = (byte)param_3[3] | 4;
    if (pbVar7[1] != 0x6c) goto LAB_00796da4;
    local_30[0] = pbVar7 + 2;
LAB_007971c3:
    *(byte *)(param_3 + 3) = (byte)param_3[3] | 1;
LAB_007971c7:
    pbVar4 = local_30[0] + 1;
    pbVar7 = local_30[0];
  }
  bVar11 = *pbVar7;
  uVar5 = (uint)bVar11;
  bVar13 = __printf_function_table != 0;
  param_3[0x10] = 0xffffffff;
  param_3[2] = (uint)bVar11;
  local_30[0] = pbVar4;
  if ((bVar13) &&
     (pcVar1 = *(code **)(__printf_arginfo_table + (ulong)bVar11 * 8), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_3,1,param_3 + 0xd,param_3 + 0x10);
    uVar5 = param_3[2];
    lVar9 = (long)iVar2;
    *(long *)(param_3 + 0xe) = lVar9;
    if (iVar2 < 0) goto LAB_00796dce;
    if ((param_3[0xc] != 0xffffffff) || (lVar9 == 0)) goto LAB_00797090;
    goto LAB_007970df;
  }
LAB_00796dce:
  param_3[0xe] = 1;
  param_3[0xf] = 0;
  switch(uVar5) {
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    uVar8 = (-(uint)((param_3[3] & 1) == 0) & 0xffffff00) + 0x107;
    goto LAB_007970d2;
  case 0x42:
  case 0x58:
  case 0x62:
  case 100:
  case 0x69:
  case 0x6f:
  case 0x75:
  case 0x78:
    uVar8 = 0x200;
    if (((param_3[3] & 4) == 0) && (uVar8 = 0x400, (param_3[3] & 2) == 0)) {
      uVar8 = *(byte *)((long)param_3 + 0xd) >> 1 & 1;
    }
    goto LAB_007970d2;
  case 0x43:
    uVar8 = 2;
    break;
  default:
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    goto LAB_00797090;
  case 0x53:
    uVar8 = 4;
    break;
  case 99:
    uVar8 = 1;
LAB_007970d2:
    param_3[0xd] = uVar8;
    if (param_3[0xc] == 0xffffffff) goto LAB_007970da;
    goto LAB_00797090;
  case 0x6e:
    uVar8 = 0x800;
    break;
  case 0x70:
    uVar8 = 5;
    break;
  case 0x73:
    uVar8 = 3;
  }
  param_3[0xd] = uVar8;
  if (param_3[0xc] == 0xffffffff) {
LAB_007970da:
    lVar9 = 1;
LAB_007970df:
    param_3[0xc] = param_2;
    lVar12 = lVar12 + lVar9;
LAB_00797090:
    if (uVar5 == 0) {
      *(byte **)(param_3 + 6) = local_30[0] + -1;
      *(byte **)(param_3 + 8) = local_30[0] + -1;
      return lVar12;
    }
  }
  *(byte **)(param_3 + 6) = local_30[0];
  pcVar3 = strchrnul((char *)local_30[0],0x25);
  *(char **)(param_3 + 8) = pcVar3;
  return lVar12;
}

