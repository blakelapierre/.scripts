echo "Angular goodies loaded"

new_directive() {
  echo "Creating directive $1"
  mkdir "$1"
  cd $1
  cp /home/blake/.scripts/angular/templates/directive/default/directive.js ./directive.js
  cp /home/blake/.scripts/angular/templates/directive/default/style.less ./style.less
  echo "$1" > ./template.html
  echo "Created directive $1"
}