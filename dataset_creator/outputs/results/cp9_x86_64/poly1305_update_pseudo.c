
undefined8 poly1305_update(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    return 1;
  }
  Poly1305_Update(param_1 + 8);
  return 1;
}

