from django import forms
from .models import files

class fileForm(forms.ModelForm):
    class Meta:
        model = files
        fields = ('name','description', 'document','username',)