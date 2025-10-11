
EC_POINT * EC_POINT_dup(EC_POINT *src,EC_GROUP *group)

{
  int iVar1;
  EC_POINT *dst;
  
  if (src != (EC_POINT *)0x0) {
    dst = EC_POINT_new(group);
    if (dst != (EC_POINT *)0x0) {
      iVar1 = EC_POINT_copy(dst,src);
      if (iVar1 != 0) {
        return dst;
      }
      EC_POINT_free(dst);
    }
  }
  return (EC_POINT *)0x0;
}

