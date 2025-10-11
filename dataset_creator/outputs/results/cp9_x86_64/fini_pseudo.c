
void fini(void)

{
  undefined1 *puVar1;
  
  puVar1 = labels;
  if (labels != default_labels) {
    labels = default_labels;
    free(puVar1);
  }
  puVar1 = precedence;
  if (precedence != default_precedence) {
    precedence = default_precedence;
    free(puVar1);
  }
  puVar1 = scopes;
  if (scopes != default_scopes) {
    scopes = default_scopes;
    free(puVar1);
    return;
  }
  return;
}

