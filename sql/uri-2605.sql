select p.name, pr.name
from products p join categories c on  p.id_categories=c.id
                join providers pr on p.id_providers=pr.id
where c.id=6