
int ASN1_UNIVERSALSTRING_to_string(ASN1_UNIVERSALSTRING *s)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  int iVar7;
  
  iVar2 = 0;
  if (s->type != 0x1c) {
    return 0;
  }
  uVar1 = s->length;
  if ((uVar1 & 3) == 0) {
    puVar4 = s->data;
    if (0 < (int)uVar1) {
      lVar3 = 0;
      do {
        if (((puVar4[lVar3] != '\0') || (puVar4[lVar3 + 1] != '\0')) || (puVar4[lVar3 + 2] != '\0'))
        {
          if ((int)lVar3 < (int)uVar1) {
            return 0;
          }
          break;
        }
        lVar3 = lVar3 + 4;
      } while ((int)lVar3 < (int)uVar1);
    }
    puVar6 = puVar4;
    if (3 < (int)uVar1) {
      lVar3 = 3;
      puVar5 = puVar4;
      while( true ) {
        puVar4 = puVar4 + lVar3;
        puVar6 = puVar5 + 1;
        lVar3 = lVar3 + 4;
        *puVar5 = *puVar4;
        if (s->length <= (int)lVar3) break;
        puVar4 = s->data;
        puVar5 = puVar6;
      }
    }
    *puVar6 = '\0';
    iVar2 = s->length;
    iVar7 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar7 = iVar2;
    }
    s->length = iVar7 >> 2;
    iVar2 = ASN1_PRINTABLE_type(s->data,iVar7 >> 2);
    s->type = iVar2;
    iVar2 = 1;
  }
  return iVar2;
}

