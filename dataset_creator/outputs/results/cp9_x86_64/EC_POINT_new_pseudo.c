
EC_POINT * EC_POINT_new(EC_GROUP *group)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  EC_POINT *ptr;
  
  if (group == (EC_GROUP *)0x0) {
    ERR_new();
    ptr = (EC_POINT *)0x0;
    ERR_set_debug("../crypto/ec/ec_lib.c",0x2d1,"EC_POINT_new");
    ERR_set_error(0x10,0xc0102,0);
  }
  else if (*(long *)(*(long *)group + 0x50) == 0) {
    ERR_new();
    ptr = (EC_POINT *)0x0;
    ERR_set_debug("../crypto/ec/ec_lib.c",0x2d5,"EC_POINT_new");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    ptr = (EC_POINT *)CRYPTO_zalloc(0x30,"../crypto/ec/ec_lib.c",0x2d9);
    if (ptr == (EC_POINT *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_lib.c",0x2db,"EC_POINT_new");
      ERR_set_error(0x10,0xc0100,0);
    }
    else {
      lVar2 = *(long *)group;
      uVar1 = *(undefined4 *)(group + 0x20);
      *(long *)ptr = lVar2;
      *(undefined4 *)(ptr + 8) = uVar1;
      iVar3 = (**(code **)(lVar2 + 0x50))(ptr);
      if (iVar3 == 0) {
        CRYPTO_free(ptr);
        ptr = (EC_POINT *)0x0;
      }
    }
  }
  return ptr;
}

