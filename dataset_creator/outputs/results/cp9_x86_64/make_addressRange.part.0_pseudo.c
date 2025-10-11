
undefined8 make_addressRange_part_0(undefined8 *param_1,void *param_2,void *param_3,int param_4)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  IPAddressOrRange *a;
  IPAddressRange *pIVar4;
  ulong uVar5;
  ASN1_BIT_STRING *pAVar6;
  byte *pbVar7;
  ulong uVar8;
  
  a = IPAddressOrRange_new();
  if (a == (IPAddressOrRange *)0x0) {
    return 0;
  }
  a->type = 1;
  pIVar4 = IPAddressRange_new();
  (a->u).addressRange = pIVar4;
  if (pIVar4 == (IPAddressRange *)0x0) goto LAB_00604e5b;
  if (pIVar4->min == (ASN1_BIT_STRING *)0x0) {
    pAVar6 = ASN1_BIT_STRING_new();
    pIVar4->min = pAVar6;
    if (pAVar6 == (ASN1_BIT_STRING *)0x0) goto LAB_00604e5b;
    pIVar4 = (a->u).addressRange;
  }
  if (pIVar4->max == (ASN1_BIT_STRING **)0x0) {
    pAVar6 = ASN1_BIT_STRING_new();
    pIVar4->max = (ASN1_BIT_STRING **)pAVar6;
    if (pAVar6 == (ASN1_BIT_STRING *)0x0) goto LAB_00604e5b;
    pIVar4 = (a->u).addressRange;
  }
  if (param_4 != 0) {
    pbVar7 = (byte *)((long)param_2 + (long)param_4 + -1);
    iVar2 = param_4;
LAB_00604d25:
    if (*pbVar7 == 0) goto LAB_00604d18;
    iVar2 = ASN1_BIT_STRING_set(pIVar4->min,param_2,iVar2);
    if (iVar2 != 0) {
      pIVar4 = (a->u).addressRange;
      iVar2 = 1;
      pAVar6 = pIVar4->min;
      uVar8 = pAVar6->flags & 0xfffffffffffffff8U | 8;
      pAVar6->flags = uVar8;
      if ((*pbVar7 & 0x7f) == 0) {
        uVar5 = 7;
      }
      else {
        do {
          iVar2 = iVar2 + 1;
        } while ((0xffU >> ((byte)iVar2 & 0x1f) & (uint)*pbVar7) != 0);
        uVar5 = (ulong)(8 - iVar2);
      }
      pAVar6->flags = uVar5 | uVar8;
      goto LAB_00604d93;
    }
    goto LAB_00604e5b;
  }
  iVar2 = ASN1_BIT_STRING_set(pIVar4->min,param_2,0);
  if (iVar2 == 0) goto LAB_00604e5b;
  pIVar4 = (a->u).addressRange;
  pIVar4->min->flags = pIVar4->min->flags & 0xfffffffffffffff8U | 8;
LAB_00604f10:
  iVar2 = ASN1_BIT_STRING_set((ASN1_STRING *)pIVar4->max,param_3,0);
  if (iVar2 != 0) {
    puVar1 = ((a->u).addressPrefix)->data;
    *(ulong *)(puVar1 + 0x10) = *(ulong *)(puVar1 + 0x10) & 0xfffffffffffffff8 | 8;
LAB_00604e1f:
    *param_1 = a;
    return 1;
  }
LAB_00604e5b:
  IPAddressOrRange_free(a);
  return 0;
LAB_00604d18:
  pbVar7 = pbVar7 + -1;
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) goto LAB_00604e40;
  goto LAB_00604d25;
LAB_00604e40:
  iVar2 = ASN1_BIT_STRING_set(pIVar4->min,param_2,0);
  if (iVar2 == 0) goto LAB_00604e5b;
  pIVar4 = (a->u).addressRange;
  pIVar4->min->flags = pIVar4->min->flags & 0xfffffffffffffff8U | 8;
LAB_00604d93:
  pbVar7 = (byte *)((long)param_3 + (long)param_4 + -1);
  do {
    if (*pbVar7 != 0xff) {
      iVar2 = ASN1_BIT_STRING_set((ASN1_STRING *)pIVar4->max,param_3,param_4);
      if (iVar2 != 0) {
        iVar2 = 1;
        puVar1 = ((a->u).addressPrefix)->data;
        uVar8 = *(ulong *)(puVar1 + 0x10) & 0xfffffffffffffff8 | 8;
        *(ulong *)(puVar1 + 0x10) = uVar8;
        if ((*pbVar7 & 0x7f) == 0x7f) {
          uVar5 = 7;
        }
        else {
          do {
            iVar2 = iVar2 + 1;
            uVar3 = 0xff >> ((byte)iVar2 & 0x1f);
          } while (uVar3 != (uVar3 & *pbVar7));
          uVar5 = (ulong)(8 - iVar2);
        }
        *(ulong *)(puVar1 + 0x10) = uVar5 | uVar8;
        goto LAB_00604e1f;
      }
      goto LAB_00604e5b;
    }
    pbVar7 = pbVar7 + -1;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  goto LAB_00604f10;
}

