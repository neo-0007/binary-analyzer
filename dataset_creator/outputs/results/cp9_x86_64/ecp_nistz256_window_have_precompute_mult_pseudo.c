
undefined8 ecp_nistz256_window_have_precompute_mult(EC_GROUP *param_1)

{
  int iVar1;
  EC_POINT *pEVar2;
  
  pEVar2 = EC_GROUP_get0_generator(param_1);
  if ((pEVar2 != (EC_POINT *)0x0) && (iVar1 = ecp_nistz256_is_affine_G(pEVar2), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x98) == 4) && (*(long *)(param_1 + 0xa0) != 0)) {
    return 1;
  }
  return 0;
}

