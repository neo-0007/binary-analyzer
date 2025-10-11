
ulong asn1_primitive_new(long *param_1,char *param_2,int param_3)

{
  long lVar1;
  int type;
  ASN1_STRING *pAVar2;
  ASN1_OBJECT *pAVar3;
  undefined4 *puVar4;
  ulong uVar5;
  bool bVar6;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
    if (*param_2 == '\x05') {
      type = -1;
    }
    else {
      type = (int)*(undefined8 *)(param_2 + 8);
      if (type == 5) goto LAB_004a42d0;
      if (type < 6) {
        if (type == -4) goto LAB_004a42e8;
        if (type == 1) goto LAB_004a4188;
      }
      else if (type == 6) goto LAB_004a429d;
    }
    if (param_3 == 0) goto LAB_004a41d0;
LAB_004a4255:
    pAVar2 = (ASN1_STRING *)*param_1;
    pAVar2->length = 0;
    pAVar2->type = 0;
    pAVar2->data = (uchar *)0x0;
    pAVar2->flags = 0x80;
    pAVar2->type = type;
    if (*param_2 != '\x05') {
      bVar6 = *param_1 != 0;
      goto LAB_004a427c;
    }
    uVar5 = 0xc0;
    bVar6 = *param_1 != 0;
  }
  else {
    if (param_3 != 0) {
      if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
        (**(code **)(lVar1 + 0x20))();
        return 1;
      }
      if (*param_2 == '\x05') {
        type = -1;
      }
      else {
        type = (int)*(undefined8 *)(param_2 + 8);
        if (type == 5) {
LAB_004a42d0:
          *param_1 = 1;
          return 1;
        }
        if (type < 6) {
          if (type == -4) {
LAB_004a42e8:
            puVar4 = (undefined4 *)CRYPTO_malloc(0x10,"../crypto/asn1/tasn_new.c",0x12d);
            if (puVar4 == (undefined4 *)0x0) {
              ERR_new();
              ERR_set_debug("../crypto/asn1/tasn_new.c",0x12e,"asn1_primitive_new");
              ERR_set_error(0xd,0xc0100,0);
              return 0;
            }
            *(undefined8 *)(puVar4 + 2) = 0;
            *puVar4 = 0xffffffff;
            *param_1 = (long)puVar4;
            bVar6 = true;
            goto LAB_004a427c;
          }
          if (type == 1) {
LAB_004a4188:
            *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
            return 1;
          }
        }
        else if (type == 6) {
LAB_004a429d:
          pAVar3 = OBJ_nid2obj(0);
          *param_1 = (long)pAVar3;
          return 1;
        }
      }
      goto LAB_004a4255;
    }
    if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a4150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar1 + 0x10))();
      return uVar5;
    }
    if (*param_2 == '\x05') {
      type = -1;
    }
    else {
      type = (int)*(undefined8 *)(param_2 + 8);
      if (type == 5) goto LAB_004a42d0;
      if (type < 6) {
        if (type == -4) goto LAB_004a42e8;
        if (type == 1) goto LAB_004a4188;
      }
      else if (type == 6) goto LAB_004a429d;
    }
LAB_004a41d0:
    pAVar2 = ASN1_STRING_type_new(type);
    bVar6 = pAVar2 != (ASN1_STRING *)0x0;
    *param_1 = (long)pAVar2;
    if (*param_2 != '\x05' || !bVar6) goto LAB_004a427c;
    uVar5 = pAVar2->flags | 0x40;
    bVar6 = *param_2 == '\x05' && bVar6;
  }
  pAVar2->flags = uVar5;
LAB_004a427c:
  return (ulong)bVar6;
}

