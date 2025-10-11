
void FUN_00623e70(long param_1)

{
  undefined8 uVar1;
  
  FUN_006c2e40();
                    /* try { // try from 00623eb0 to 00623eb4 has its CatchHandler @ 00623eb5 */
  uVar1 = FUN_00623f50(*(undefined8 *)(param_1 + -0x40));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00623eb0 with catch @ 00623eb5
                        */
  FUN_0040225d(uVar1);
  return;
}

