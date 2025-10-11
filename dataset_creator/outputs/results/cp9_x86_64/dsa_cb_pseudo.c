
char dsa_cb(int param_1,undefined8 *param_2)

{
  DSA *pDVar1;
  
  if (param_1 == 0) {
    pDVar1 = DSA_new();
    *param_2 = pDVar1;
    return (pDVar1 != (DSA *)0x0) * '\x02';
  }
  if (param_1 != 2) {
    return '\x01';
  }
  DSA_free((DSA *)*param_2);
  *param_2 = 0;
  return '\x02';
}

