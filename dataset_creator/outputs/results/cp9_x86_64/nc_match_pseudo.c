
undefined8 nc_match(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = *param_1;
  if (uVar6 == 0) {
    iVar5 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 2));
    uVar6 = (uint)(iVar5 == 0x4b8);
  }
  iVar2 = 0;
  iVar5 = 0;
  do {
    iVar1 = OPENSSL_sk_num(*param_2);
    if (iVar1 <= iVar5) {
      if (iVar2 == 1) {
        return 0x2f;
      }
      iVar5 = 0;
      do {
        iVar2 = OPENSSL_sk_num(param_2[1]);
        if (iVar2 <= iVar5) {
          return 0;
        }
        puVar3 = (undefined8 *)OPENSSL_sk_value(param_2[1],iVar5);
        if ((*(uint *)*puVar3 == uVar6) &&
           ((uVar6 != 0 ||
            (iVar2 = OBJ_cmp((ASN1_OBJECT *)**(undefined8 **)(param_1 + 2),
                             (ASN1_OBJECT *)**(undefined8 **)((uint *)*puVar3 + 2)), iVar2 == 0))))
        {
          iVar2 = nc_minmax_valid_isra_0(puVar3[1],puVar3[2]);
          if (iVar2 == 0) {
            return 0x31;
          }
          uVar4 = nc_match_single(uVar6,param_1,*puVar3);
          if ((int)uVar4 == 0) {
            return 0x30;
          }
          if ((int)uVar4 != 0x2f) {
            return uVar4;
          }
        }
        iVar5 = iVar5 + 1;
      } while( true );
    }
    puVar3 = (undefined8 *)OPENSSL_sk_value(*param_2,iVar5);
    if ((*(uint *)*puVar3 == uVar6) &&
       ((uVar6 != 0 ||
        (iVar1 = OBJ_cmp((ASN1_OBJECT *)**(undefined8 **)(param_1 + 2),
                         (ASN1_OBJECT *)**(undefined8 **)((uint *)*puVar3 + 2)), iVar1 == 0)))) {
      iVar1 = nc_minmax_valid_isra_0(puVar3[1],puVar3[2]);
      if (iVar1 == 0) {
        return 0x31;
      }
      if (iVar2 != 2) {
        uVar4 = nc_match_single(uVar6,param_1,*puVar3);
        if ((int)uVar4 != 0) {
          if ((int)uVar4 != 0x2f) {
            return uVar4;
          }
          iVar2 = 1;
          goto LAB_0060cec0;
        }
      }
      iVar2 = 2;
    }
LAB_0060cec0:
    iVar5 = iVar5 + 1;
  } while( true );
}

