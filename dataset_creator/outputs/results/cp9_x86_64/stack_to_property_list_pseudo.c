
int * stack_to_property_list(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *ptr;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar2 = OPENSSL_sk_num(param_2);
  if (iVar2 < 1) {
    ptr = (int *)CRYPTO_malloc(0x20,"../crypto/property/property_parse.c",0x122);
    if (ptr != (int *)0x0) {
      OPENSSL_sk_sort(param_2);
      *(byte *)(ptr + 1) = *(byte *)(ptr + 1) & 0xfe;
LAB_0042c7cd:
      *ptr = iVar2;
      return ptr;
    }
  }
  else {
    ptr = (int *)CRYPTO_malloc((iVar2 + -1) * 0x18 + 0x20,"../crypto/property/property_parse.c",
                               0x122);
    if (ptr != (int *)0x0) {
      iVar7 = 0;
      OPENSSL_sk_sort(param_2);
      *(byte *)(ptr + 1) = *(byte *)(ptr + 1) & 0xfe;
      puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,0);
      uVar4 = puVar3[1];
      *(undefined8 *)(ptr + 2) = *puVar3;
      *(undefined8 *)(ptr + 4) = uVar4;
      *(undefined8 *)(ptr + 6) = puVar3[2];
      *(byte *)(ptr + 1) = *(byte *)(ptr + 1) & 0xfe | (*(byte *)(ptr + 5) | *(byte *)(ptr + 1)) & 1
      ;
      piVar6 = ptr + 8;
      iVar1 = ptr[2];
      do {
        iVar5 = iVar1;
        iVar7 = iVar7 + 1;
        if (iVar7 == iVar2) goto LAB_0042c7cd;
        puVar3 = (undefined8 *)OPENSSL_sk_value(param_2,iVar7);
        uVar4 = puVar3[1];
        *(undefined8 *)piVar6 = *puVar3;
        *(undefined8 *)(piVar6 + 2) = uVar4;
        *(undefined8 *)(piVar6 + 4) = puVar3[2];
        *(byte *)(ptr + 1) =
             *(byte *)(ptr + 1) & 0xfe |
             (*(byte *)(ptr + (long)iVar7 * 6 + 5) | *(byte *)(ptr + 1)) & 1;
        iVar1 = *piVar6;
        piVar6 = piVar6 + 6;
      } while (iVar1 != iVar5);
      CRYPTO_free(ptr);
      ERR_new();
      ERR_set_debug("../crypto/property/property_parse.c",0x12f,"stack_to_property_list");
      uVar4 = ossl_property_name_str(param_1,iVar5);
      ERR_set_error(0x37,0x6c,"Duplicated name `%s\'",uVar4);
    }
  }
  return (int *)0x0;
}

