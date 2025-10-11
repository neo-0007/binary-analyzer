
size_t mem_ctrl(long param_1,int param_2,size_t param_3,size_t *param_4)

{
  size_t *psVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  BUF_MEM *pBVar5;
  size_t sVar6;
  undefined4 uVar7;
  BUF_MEM *pBVar8;
  BUF_MEM *pBVar9;
  uint uVar10;
  BUF_MEM *a;
  
  psVar1 = *(size_t **)(param_1 + 0x40);
  a = (BUF_MEM *)*psVar1;
  pBVar8 = (BUF_MEM *)psVar1[1];
  uVar10 = *(uint *)(param_1 + 0x30) & 0x200;
  pBVar5 = pBVar8;
  pBVar9 = a;
  if (uVar10 != 0) {
    pBVar5 = a;
    pBVar9 = pBVar8;
  }
  pcVar2 = pBVar5->data;
  pcVar3 = pBVar9->data;
  sVar6 = (long)pcVar2 - (long)pcVar3;
  if (pcVar2 == pcVar3) {
    sVar6 = 0;
  }
  sVar4 = pBVar5->length;
  uVar7 = (undefined4)param_3;
  if (param_2 < 0xd) {
    param_3 = sVar4;
    switch(param_2) {
    case 1:
      param_3 = 1;
      if (a->data != (char *)0x0) {
        if (uVar10 == 0) {
          if ((*(uint *)(param_1 + 0x30) & 0x400) == 0) {
            memset(a->data,0,a->max);
            a->length = 0;
            pBVar8 = (BUF_MEM *)psVar1[1];
            a = (BUF_MEM *)*psVar1;
          }
          pcVar2 = a->data;
          pBVar8->length = a->length;
          pBVar8->data = pcVar2;
          sVar6 = a[1].length;
          pBVar8->max = a->max;
          pBVar8[1].length = sVar6;
          param_3 = 1;
        }
        else {
          pcVar2 = pBVar8->data;
          a->length = pBVar8->length;
          a->data = pcVar2;
          sVar6 = pBVar8[1].length;
          a->max = pBVar8->max;
          a[1].length = sVar6;
        }
      }
      break;
    case 2:
      param_3 = (ulong)(sVar4 == 0);
      break;
    case 3:
      if (param_4 != (size_t *)0x0) {
        *param_4 = (size_t)pcVar2;
      }
      break;
    default:
switchD_005ad2b6_caseD_4:
      param_3 = 0;
      break;
    case 8:
      param_3 = (long)*(int *)(param_1 + 0x2c);
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
      param_3 = 1;
      break;
    case 10:
      break;
    case 0xb:
    case 0xc:
      param_3 = 1;
    }
  }
  else {
    switch(param_2) {
    case 0x72:
      if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
        if (uVar10 != 0) {
          a->data = (char *)0x0;
        }
        BUF_MEM_free(a);
        pBVar8 = (BUF_MEM *)psVar1[1];
      }
      sVar6 = *param_4;
      pcVar2 = (char *)param_4[1];
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
      param_3 = 1;
      *psVar1 = (size_t)param_4;
      pBVar8->length = sVar6;
      pBVar8->data = pcVar2;
      sVar6 = param_4[3];
      pBVar8->max = param_4[2];
      pBVar8[1].length = sVar6;
      break;
    case 0x73:
      param_3 = 1;
      if (param_4 != (size_t *)0x0) {
        if ((uVar10 == 0) && (*(int *)(param_1 + 0x28) != 0)) {
          mem_buf_sync_part_0_isra_0(psVar1);
          a = (BUF_MEM *)*psVar1;
        }
        *param_4 = (size_t)a;
        param_3 = 1;
      }
      break;
    default:
      goto switchD_005ad2b6_caseD_4;
    case 0x80:
      if (((long)param_3 < 0) || ((long)(sVar6 + sVar4) < (long)param_3)) {
        param_3 = 0xffffffffffffffff;
      }
      else {
        sVar6 = pBVar9->length;
        pBVar5->data = pcVar3 + param_3;
        pBVar5->length = sVar6 - param_3;
        pBVar5->max = pBVar9->max - param_3;
      }
      break;
    case 0x82:
      *(undefined4 *)(param_1 + 0x38) = uVar7;
      param_3 = 1;
      break;
    case 0x85:
      param_3 = sVar6;
    }
  }
  return param_3;
}

